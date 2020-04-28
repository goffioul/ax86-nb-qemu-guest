#define LOG_TAG "OpenSLES-nb"

#include <dlfcn.h>
#include <cutils/log.h>

#define DEFINE_IID(iid) \
const void *iid __attribute__((visibility("default"))) = NULL;
#include "libOpenSLES.iid.h"
#undef DEFINE_IID

static void *libOpenSLES;

__attribute__((constructor))
static void initialize_IID()
{
    ALOGI("initializing OpenSLES IID list");
    libOpenSLES = dlopen("/system/lib/arm/libOpenSLES.so", RTLD_LAZY);
    if (libOpenSLES) {
        void *sym;
#define DEFINE_IID(iid) \
        sym = dlsym(libOpenSLES, #iid); \
        if (sym) \
            iid = *(void **) sym; \
        else \
            ALOGE("unable to find " #iid ": %s", dlerror());
#include "libOpenSLES.iid.h"
#undef DEFINE_IID
    }
    else {
        ALOGE("unable to open libOpenSLES.so: %s", dlerror());
    }
}

__attribute__((destructor))
static void uninitialize_IID()
{
    if (libOpenSLES) {
        dlclose(libOpenSLES);
        libOpenSLES = NULL;
#define DEFINE_IID(iid) \
        iid = NULL;
#include "libOpenSLES.iid.h"
#undef DEFINE_IID
    }
}

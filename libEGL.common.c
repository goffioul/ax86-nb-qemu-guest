#define LOG_TAG "libnb-qemu-guest"
#define LOG_NDEBUG 0

#include <log/log.h>

void *eglGetProcAddress(const char *procname) {
    ALOGE("eglGetProcAddress: %s", procname);
    return NULL;
}

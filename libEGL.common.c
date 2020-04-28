#define LOG_TAG "libnb-qemu-guest"
#define LOG_NDEBUG 0

#include <log/log.h>

void *eglGetProcAddress(const char *procname) {
    // LOG_ALWAYS_FATAL("eglGetProcAddress: %s", procname);
    ALOGE("eglGetProcAddress: %s", procname);
    return NULL;
}

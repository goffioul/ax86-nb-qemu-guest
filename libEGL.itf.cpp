#define LOG_TAG "libEGL-nb"
//#define LOG_NDEBUG 0

#include <string.h>
#include <log/log.h>
#include <GLES/gl.h>

extern "C" {
    void *eglGetProcAddress(const char *procname);
    void *libEGL_eglGetProcAddress(const char *procname);
    GLvoid libEGL_glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum *attachments);
}

void *eglGetProcAddress(const char *procname) {
    void *func = libEGL_eglGetProcAddress(procname);
    if (func) {
        if (strcmp(procname, "glDiscardFramebufferEXT") == 0) {
            func = (void *) libEGL_glDiscardFramebufferEXT;
        }
    }
    return func;
}

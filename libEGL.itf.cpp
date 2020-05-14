#define LOG_TAG "libEGL-nb"
//#define LOG_NDEBUG 0

#include <string.h>
#include <log/log.h>
#include <GLES/gl.h>
#include <GLES/glext.h>

extern "C" {
    void *eglGetProcAddress(const char *procname);
    void *libEGL_eglGetProcAddress(const char *procname);
    void libEGL_glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum *attachments);
    void libEGL_glDebugMessageControlKHR(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
    void libEGL_glDebugMessageInsertKHR(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
    void libEGL_glPushDebugGroupKHR(GLenum source, GLuint id, GLsizei length, const GLchar *message);
    void libEGL_glPopDebugGroupKHR(void);
    void libEGL_glObjectLabelKHR(GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
    void libEGL_glGetObjectLabelKHR(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
    void libEGL_glInsertEventMarkerEXT(GLsizei length, const GLchar *marker);
    void libEGL_glPushGroupMarkerEXT(GLsizei length, const GLchar *marker);
    void libEGL_glPopGroupMarkerEXT(void);
    void libEGL_glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 *params);
    void libEGL_glCopyImageSubDataOES(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
    void libEGL_glDrawElementsBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
    void libEGL_glDrawRangeElementsBaseVertexOES(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
    void libEGL_glDrawElementsInstancedBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
    void libEGL_glMultiDrawElementsBaseVertexEXT(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount, const GLint *basevertex);
    void libEGL_glBlendBarrierKHR(void);
}

void *eglGetProcAddress(const char *procname) {
    void *func = libEGL_eglGetProcAddress(procname);
    if (func == nullptr) {
        return func;
    }
#define DEFINE_EXT(name) \
    else if (strcmp(procname, #name) == 0) { \
        func = (void *) libEGL_ ## name; \
    }
DEFINE_EXT(glDiscardFramebufferEXT)
DEFINE_EXT(glDebugMessageControlKHR)
DEFINE_EXT(glDebugMessageInsertKHR)
DEFINE_EXT(glPushDebugGroupKHR)
DEFINE_EXT(glPopDebugGroupKHR)
DEFINE_EXT(glObjectLabelKHR)
DEFINE_EXT(glGetObjectLabelKHR)
DEFINE_EXT(glInsertEventMarkerEXT)
DEFINE_EXT(glPushGroupMarkerEXT)
DEFINE_EXT(glPopGroupMarkerEXT)
DEFINE_EXT(glGetQueryObjectui64vEXT)
DEFINE_EXT(glCopyImageSubDataOES)
DEFINE_EXT(glDrawElementsBaseVertexOES)
DEFINE_EXT(glDrawRangeElementsBaseVertexOES)
DEFINE_EXT(glDrawElementsInstancedBaseVertexOES)
DEFINE_EXT(glMultiDrawElementsBaseVertexEXT)
DEFINE_EXT(glBlendBarrierKHR)
#undef DEFINE_EXT
    else {
        func = nullptr;
    }
    ALOGD("eglGetProcAddress(%s) => %p", procname, func);
    return func;
}

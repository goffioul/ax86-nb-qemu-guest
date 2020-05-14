__attribute__((naked,noinline)) void eglChooseConfig() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0100\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCopyBuffers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0101\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreateContext() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0102\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreatePbufferSurface() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0103\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreatePixmapSurface() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0104\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreateWindowSurface() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0105\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglDestroyContext() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0106\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglDestroySurface() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0107\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetConfigAttrib() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0108\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetConfigs() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0109\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetCurrentDisplay() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x010a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetCurrentSurface() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x010b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetDisplay() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x010c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetError() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x010d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglInitialize() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x010e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglMakeCurrent() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x010f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglQueryContext() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0110\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglQueryString() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0111\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglQuerySurface() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0112\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglSwapBuffers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0113\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglTerminate() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0114\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglWaitGL() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0115\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglWaitNative() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0116\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglBindTexImage() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0117\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglReleaseTexImage() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0118\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglSurfaceAttrib() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0119\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglSwapInterval() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x011a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglBindAPI() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x011b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglQueryAPI() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x011c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreatePbufferFromClientBuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x011d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglReleaseThread() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x011e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglWaitClient() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x011f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetCurrentContext() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0120\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreateSync() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0121\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglDestroySync() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0122\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglClientWaitSync() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0123\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetSyncAttrib() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0124\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreateImage() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0125\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglDestroyImage() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0126\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetPlatformDisplay() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0127\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreatePlatformWindowSurface() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0128\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreatePlatformPixmapSurface() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0129\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglWaitSync() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x012a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreateSyncKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x012b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglDestroySyncKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x012c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglClientWaitSyncKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x012d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetSyncAttribKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x012e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreateImageKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x012f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglDestroyImageKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0130\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglSetDamageRegionKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0131\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglSwapBuffersWithDamageKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0132\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreateStreamKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0133\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglDestroyStreamKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0134\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglStreamAttribKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0135\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglQueryStreamKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0136\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglQueryStreamu64KHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0137\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreateStreamFromFileDescriptorKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0138\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetStreamFileDescriptorKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0139\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglQueryStreamTimeKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x013a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglCreateStreamProducerSurfaceKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x013b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglStreamConsumerGLTextureExternalKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x013c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglStreamConsumerAcquireKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x013d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglStreamConsumerReleaseKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x013e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglDupNativeFenceFDANDROID() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x013f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglWaitSyncKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0140\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglSignalSyncKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0141\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglLockSurfaceKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0142\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglUnlockSurfaceKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0143\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglPresentationTimeANDROID() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0144\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglQueryStringImplementationANDROID() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0145\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetNativeClientBufferANDROID() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0146\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetCompositorTimingSupportedANDROID() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0147\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetCompositorTimingANDROID() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0148\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetNextFrameIdANDROID() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0149\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetFrameTimestampSupportedANDROID() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x014a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetFrameTimestampsANDROID() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x014b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetSystemTimeFrequencyNV() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x014c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void eglGetSystemTimeNV() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x014d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void _ZN7android18egl_get_init_countEPv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x014e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void _ZN7android22egl_set_cache_filenameEPKc() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x014f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void _Z13eglBeginFramePvS_() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0150\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_eglGetProcAddress() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0151\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glDiscardFramebufferEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0152\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glDebugMessageControlKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0153\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glDebugMessageInsertKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0154\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glPushDebugGroupKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0155\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glPopDebugGroupKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0156\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glObjectLabelKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0157\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glGetObjectLabelKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0158\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glInsertEventMarkerEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0159\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glPushGroupMarkerEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x015a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glPopGroupMarkerEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x015b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glGetQueryObjectui64vEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x015c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glCopyImageSubDataOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x015d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glDrawElementsBaseVertexOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x015e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glDrawRangeElementsBaseVertexOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x015f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glDrawElementsInstancedBaseVertexOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0160\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glMultiDrawElementsBaseVertexEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0161\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void libEGL_glBlendBarrierKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0162\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}

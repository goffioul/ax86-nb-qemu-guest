__attribute__((naked,noinline)) void AAssetDir_close() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0700\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAssetDir_getNextFileName() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0701\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAssetDir_rewind() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0702\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAssetManager_fromJava() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0703\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAssetManager_open() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0704\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAssetManager_openDir() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0705\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_close() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0706\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_getBuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0707\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_getLength() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0708\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_getLength64() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0709\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_getRemainingLength() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x070a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_getRemainingLength64() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x070b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_isAllocated() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x070c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_openFileDescriptor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x070d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_openFileDescriptor64() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x070e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_read() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x070f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_seek() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0710\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AAsset_seek64() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0711\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ANativeWindow_acquire() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0712\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ANativeWindow_getFormat() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0713\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ANativeWindow_getHeight() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0714\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ANativeWindow_getWidth() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0715\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ANativeWindow_lock() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0716\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ANativeWindow_release() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0717\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ANativeWindow_setBuffersGeometry() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0718\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ANativeWindow_unlockAndPost() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0719\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ANativeWindow_fromSurface() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x071a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ALooper_acquire() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x071b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ALooper_addFd() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x071c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ALooper_forThread() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x071d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ALooper_pollAll() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x071e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ALooper_pollOnce() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x071f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ALooper_prepare() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0720\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ALooper_release() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0721\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ALooper_removeFd() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0722\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ALooper_wake() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0723\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensorEventQueue_disableSensor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0724\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensorEventQueue_enableSensor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0725\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensorEventQueue_getEvents() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0726\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensorEventQueue_hasEvents() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0727\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensorEventQueue_setEventRate() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0728\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensorManager_createEventQueue() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0729\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensorManager_destroyEventQueue() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x072a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensorManager_getDefaultSensor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x072b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensorManager_getInstance() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x072c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensorManager_getSensorList() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x072d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensor_getMinDelay() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x072e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensor_getName() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x072f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensor_getResolution() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0730\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensor_getType() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0731\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void ASensor_getVendor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0732\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AConfiguration_delete() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0733\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AConfiguration_fromAssetManager() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0734\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AConfiguration_getCountry() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0735\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AConfiguration_getDensity() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0736\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AConfiguration_getLanguage() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0737\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AConfiguration_new() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0738\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AInputQueue_attachLooper() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0739\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AInputQueue_detachLooper() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x073a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AInputQueue_finishEvent() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x073b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AInputQueue_getEvent() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x073c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AInputQueue_preDispatchEvent() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x073d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AInputEvent_getType() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x073e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AMotionEvent_getAction() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x073f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AMotionEvent_getDownTime() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0740\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AMotionEvent_getEventTime() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0741\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AMotionEvent_getPointerCount() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0742\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AMotionEvent_getPointerId() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0743\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AMotionEvent_getX() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0744\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void AMotionEvent_getY() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0745\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}

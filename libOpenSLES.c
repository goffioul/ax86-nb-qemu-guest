__attribute__((naked,noinline)) void __nb_slCreateEngine() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0600\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLBufferQueueItf_Enqueue() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0601\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLBufferQueueItf_Clear() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0602\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLBufferQueueItf_GetState() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0603\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLBufferQueueItf_RegisterCallback() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0604\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLEffectSendItf_EnableEffectSend() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0605\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLEngineItf_CreateAudioPlayer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0606\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLEngineItf_CreateOutputMix() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0607\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLEnvironmentalReverbItf_SetEnvironmentalReverbProperties() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0608\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLMuteSoloItf_SetChannelMute() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0609\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLMuteSoloItf_GetChannelMute() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x060a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLMuteSoloItf_SetChannelSolo() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x060b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLMuteSoloItf_GetChannelSolo() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x060c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLMuteSoloItf_GetNumChannels() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x060d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLObjectItf_Realize() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x060e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLObjectItf_Resume() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x060f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLObjectItf_GetState() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0610\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLObjectItf_GetInterface() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0611\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLObjectItf_RegisterCallback() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0612\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLObjectItf_AbortAsyncOperation() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0613\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLObjectItf_Destroy() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0614\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLObjectItf_SetPriority() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0615\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLObjectItf_GetPriority() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0616\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLObjectItf_SetLossOfControlInterfaces() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0617\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_SetPlayState() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0618\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_GetPlayState() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0619\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_GetDuration() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x061a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_GetPosition() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x061b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_RegisterCallback() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x061c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_SetCallbackEventsMask() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x061d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_GetCallbackEventsMask() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x061e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_SetMarkerPosition() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x061f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_ClearMarkerPosition() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0620\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_GetMarkerPosition() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0621\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_SetPositionUpdatePeriod() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0622\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlayItf_GetPositionUpdatePeriod() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0623\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlaybackRateItf_SetRate() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0624\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlaybackRateItf_GetRate() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0625\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlaybackRateItf_SetPropertyConstraints() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0626\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlaybackRateItf_GetProperties() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0627\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlaybackRateItf_GetCapabilitiesOfRate() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0628\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLPlaybackRateItf_GetRateRange() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0629\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLSeekItf_SetPosition() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x062a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLSeekItf_SetLoop() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x062b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLSeekItf_GetLoop() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x062c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLVolumeItf_SetVolumeLevel() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x062d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLVolumeItf_GetVolumeLevel() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x062e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLVolumeItf_GetMaxVolumeLevel() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x062f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLVolumeItf_SetMute() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0630\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLVolumeItf_GetMute() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0631\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLVolumeItf_EnableStereoPosition() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0632\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLVolumeItf_IsEnabledStereoPosition() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0633\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLVolumeItf_SetStereoPosition() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0634\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLVolumeItf_GetStereoPosition() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0635\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLAndroidConfigurationItf_SetConfiguration() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0636\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLAndroidConfigurationItf_GetConfiguration() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0637\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLAndroidConfigurationItf_AcquireJavaProxy() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0638\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLAndroidConfigurationItf_ReleaseJavaProxy() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0639\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLAndroidSimpleBufferQueueItf_Enqueue() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x063a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLAndroidSimpleBufferQueueItf_Clear() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x063b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLAndroidSimpleBufferQueueItf_GetState() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x063c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLAndroidSimpleBufferQueueItf_RegisterCallback() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x063d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}

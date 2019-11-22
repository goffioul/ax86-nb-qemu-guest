__attribute__((naked,noinline)) void glActiveTexture() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1000\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glAttachShader() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1001\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindAttribLocation() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1002\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindBuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1003\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindFramebuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1004\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindRenderbuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1005\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindTexture() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1006\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendColor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1007\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendEquation() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1008\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendEquationSeparate() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1009\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendFunc() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x100a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendFuncSeparate() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x100b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBufferData() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x100c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBufferSubData() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x100d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCheckFramebufferStatus() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x100e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClear() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x100f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearColor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1010\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearDepthf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1011\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearStencil() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1012\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glColorMask() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1013\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCompileShader() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1014\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCompressedTexImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1015\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCompressedTexSubImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1016\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCopyTexImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1017\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCopyTexSubImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1018\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCreateProgram() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1019\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCreateShader() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x101a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCullFace() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x101b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteBuffers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x101c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteFramebuffers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x101d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteProgram() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x101e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteRenderbuffers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x101f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteShader() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1020\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteTextures() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1021\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDepthFunc() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1022\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDepthMask() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1023\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDepthRangef() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1024\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDetachShader() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1025\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDisable() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1026\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDisableVertexAttribArray() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1027\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawArrays() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1028\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawElements() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1029\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glEnable() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x102a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glEnableVertexAttribArray() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x102b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFinish() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x102c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFlush() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x102d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFramebufferRenderbuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x102e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFramebufferTexture2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x102f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFrontFace() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1030\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenBuffers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1031\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenerateMipmap() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1032\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenFramebuffers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1033\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenRenderbuffers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1034\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenTextures() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1035\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetActiveAttrib() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1036\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetActiveUniform() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1037\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetAttachedShaders() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1038\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetAttribLocation() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1039\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetBooleanv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x103a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetBufferParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x103b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetError() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x103c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetFloatv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x103d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetFramebufferAttachmentParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x103e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetIntegerv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x103f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetProgramiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1040\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetProgramInfoLog() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1041\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetRenderbufferParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1042\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetShaderiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1043\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetShaderInfoLog() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1044\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetShaderPrecisionFormat() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1045\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetShaderSource() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1046\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetString() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1047\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexParameterfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1048\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1049\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetUniformfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x104a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetUniformiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x104b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetUniformLocation() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x104c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetVertexAttribfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x104d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetVertexAttribiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x104e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetVertexAttribPointerv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x104f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glHint() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1050\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsBuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1051\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsEnabled() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1052\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsFramebuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1053\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsProgram() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1054\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsRenderbuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1055\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsShader() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1056\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsTexture() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1057\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLineWidth() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1058\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLinkProgram() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1059\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPixelStorei() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x105a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPolygonOffset() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x105b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glReadPixels() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x105c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glReleaseShaderCompiler() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x105d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glRenderbufferStorage() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x105e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSampleCoverage() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x105f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glScissor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1060\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glShaderBinary() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1061\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glShaderSource() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1062\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glStencilFunc() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1063\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glStencilFuncSeparate() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1064\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glStencilMask() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1065\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glStencilMaskSeparate() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1066\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glStencilOp() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1067\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glStencilOpSeparate() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1068\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1069\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x106a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x106b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameteri() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x106c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x106d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexSubImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x106e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform1f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x106f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform1fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1070\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform1i() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1071\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform1iv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1072\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform2f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1073\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform2fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1074\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform2i() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1075\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform2iv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1076\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform3f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1077\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform3fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1078\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform3i() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1079\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform3iv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x107a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform4f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x107b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform4fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x107c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform4i() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x107d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform4iv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x107e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniformMatrix2fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x107f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniformMatrix3fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1080\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniformMatrix4fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1081\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUseProgram() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1082\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glValidateProgram() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1083\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttrib1f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1084\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttrib1fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1085\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttrib2f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1086\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttrib2fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1087\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttrib3f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1088\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttrib3fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1089\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttrib4f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x108a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttrib4fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x108b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttribPointer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x108c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glViewport() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x108d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glReadBuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x108e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawRangeElements() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x108f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexImage3D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1090\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexSubImage3D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1091\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCopyTexSubImage3D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1092\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCompressedTexImage3D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1093\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCompressedTexSubImage3D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1094\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenQueries() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1095\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteQueries() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1096\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsQuery() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1097\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBeginQuery() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1098\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glEndQuery() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1099\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetQueryiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x109a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetQueryObjectuiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x109b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUnmapBuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x109c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetBufferPointerv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x109d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawBuffers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x109e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniformMatrix2x3fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x109f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniformMatrix3x2fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10a0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniformMatrix2x4fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10a1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniformMatrix4x2fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10a2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniformMatrix3x4fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10a3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniformMatrix4x3fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10a4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlitFramebuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10a5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glRenderbufferStorageMultisample() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10a6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFramebufferTextureLayer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10a7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMapBufferRange() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10a8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFlushMappedBufferRange() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10a9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindVertexArray() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10aa\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteVertexArrays() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ab\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenVertexArrays() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ac\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsVertexArray() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ad\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetIntegeri_v() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ae\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBeginTransformFeedback() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10af\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glEndTransformFeedback() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10b0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindBufferRange() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10b1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindBufferBase() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10b2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTransformFeedbackVaryings() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10b3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTransformFeedbackVarying() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10b4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttribIPointer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10b5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetVertexAttribIiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10b6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetVertexAttribIuiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10b7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttribI4i() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10b8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttribI4ui() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10b9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttribI4iv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ba\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttribI4uiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10bb\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetUniformuiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10bc\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetFragDataLocation() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10bd\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform1ui() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10be\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform2ui() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10bf\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform3ui() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10c0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform4ui() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10c1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform1uiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10c2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform2uiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10c3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform3uiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10c4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniform4uiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10c5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearBufferiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10c6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearBufferuiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10c7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearBufferfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10c8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearBufferfi() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10c9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetStringi() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ca\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCopyBufferSubData() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10cb\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetUniformIndices() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10cc\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetActiveUniformsiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10cd\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetUniformBlockIndex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ce\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetActiveUniformBlockiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10cf\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetActiveUniformBlockName() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10d0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUniformBlockBinding() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10d1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawArraysInstanced() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10d2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawElementsInstanced() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10d3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFenceSync() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10d4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsSync() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10d5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteSync() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10d6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClientWaitSync() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10d7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glWaitSync() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10d8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetInteger64v() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10d9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetSynciv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10da\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetInteger64i_v() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10db\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetBufferParameteri64v() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10dc\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenSamplers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10dd\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteSamplers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10de\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsSampler() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10df\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindSampler() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10e0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSamplerParameteri() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10e1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSamplerParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10e2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSamplerParameterf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10e3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSamplerParameterfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10e4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetSamplerParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10e5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetSamplerParameterfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10e6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttribDivisor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10e7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindTransformFeedback() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10e8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteTransformFeedbacks() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10e9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenTransformFeedbacks() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ea\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsTransformFeedback() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10eb\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPauseTransformFeedback() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ec\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glResumeTransformFeedback() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ed\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetProgramBinary() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ee\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramBinary() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ef\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramParameteri() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10f0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glInvalidateFramebuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10f1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glInvalidateSubFramebuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10f2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexStorage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10f3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexStorage3D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10f4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetInternalformativ() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10f5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDispatchCompute() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10f6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDispatchComputeIndirect() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10f7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawArraysIndirect() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10f8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawElementsIndirect() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10f9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFramebufferParameteri() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10fa\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetFramebufferParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10fb\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetProgramInterfaceiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10fc\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetProgramResourceIndex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10fd\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetProgramResourceName() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10fe\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetProgramResourceiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x10ff\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetProgramResourceLocation() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1100\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUseProgramStages() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1101\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glActiveShaderProgram() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1102\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCreateShaderProgramv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1103\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindProgramPipeline() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1104\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteProgramPipelines() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1105\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenProgramPipelines() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1106\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsProgramPipeline() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1107\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetProgramPipelineiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1108\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform1i() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1109\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform2i() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x110a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform3i() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x110b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform4i() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x110c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform1ui() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x110d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform2ui() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x110e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform3ui() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x110f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform4ui() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1110\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform1f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1111\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform2f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1112\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform3f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1113\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform4f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1114\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform1iv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1115\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform2iv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1116\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform3iv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1117\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform4iv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1118\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform1uiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1119\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform2uiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x111a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform3uiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x111b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform4uiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x111c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform1fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x111d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform2fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x111e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform3fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x111f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniform4fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1120\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniformMatrix2fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1121\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniformMatrix3fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1122\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniformMatrix4fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1123\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniformMatrix2x3fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1124\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniformMatrix3x2fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1125\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniformMatrix2x4fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1126\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniformMatrix4x2fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1127\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniformMatrix3x4fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1128\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glProgramUniformMatrix4x3fv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1129\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glValidateProgramPipeline() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x112a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetProgramPipelineInfoLog() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x112b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindImageTexture() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x112c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetBooleani_v() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x112d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMemoryBarrier() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x112e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMemoryBarrierByRegion() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x112f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexStorage2DMultisample() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1130\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetMultisamplefv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1131\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSampleMaski() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1132\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexLevelParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1133\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexLevelParameterfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1134\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindVertexBuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1135\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttribFormat() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1136\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttribIFormat() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1137\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexAttribBinding() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1138\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexBindingDivisor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1139\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendBarrier() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x113a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCopyImageSubData() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x113b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDebugMessageControl() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x113c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDebugMessageInsert() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x113d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDebugMessageCallback() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x113e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetDebugMessageLog() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x113f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPushDebugGroup() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1140\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPopDebugGroup() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1141\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glObjectLabel() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1142\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetObjectLabel() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1143\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glObjectPtrLabel() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1144\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetObjectPtrLabel() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1145\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetPointerv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1146\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glEnablei() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1147\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDisablei() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1148\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendEquationi() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1149\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendEquationSeparatei() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x114a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendFunci() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x114b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendFuncSeparatei() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x114c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glColorMaski() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x114d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsEnabledi() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x114e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawElementsBaseVertex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x114f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawRangeElementsBaseVertex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1150\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawElementsInstancedBaseVertex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1151\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFramebufferTexture() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1152\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPrimitiveBoundingBox() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1153\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetGraphicsResetStatus() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1154\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glReadnPixels() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1155\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetnUniformfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1156\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetnUniformiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1157\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetnUniformuiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1158\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMinSampleShading() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1159\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPatchParameteri() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x115a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterIiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x115b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterIuiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x115c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexParameterIiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x115d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexParameterIuiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x115e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSamplerParameterIiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x115f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSamplerParameterIuiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1160\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetSamplerParameterIiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1161\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetSamplerParameterIuiv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1162\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexBuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1163\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexBufferRange() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1164\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexStorage3DMultisample() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1165\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendBarrierKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1166\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glEnableiEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1167\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDisableiEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1168\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendEquationiEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1169\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendEquationSeparateiEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x116a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendFunciEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x116b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendFuncSeparateiEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x116c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glColorMaskiEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x116d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsEnablediEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x116e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCopyImageSubDataEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x116f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDebugMessageControlKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1170\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDebugMessageInsertKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1171\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPushDebugGroupKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1172\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPopDebugGroupKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1173\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glObjectLabelKHR() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1174\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFramebufferTextureEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1175\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterIivEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1176\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterIuivEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1177\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexParameterIivEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1178\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexParameterIuivEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1179\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSamplerParameterIivEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x117a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSamplerParameterIuivEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x117b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetSamplerParameterIivEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x117c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetSamplerParameterIuivEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x117d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMinSampleShadingOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x117e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPatchParameteriEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x117f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPrimitiveBoundingBoxEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1180\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexBufferEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1181\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexBufferRangeEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1182\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenQueriesEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1183\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteQueriesEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1184\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsQueryEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1185\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBeginQueryEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1186\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glEndQueryEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1187\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glQueryCounterEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1188\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetQueryivEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x1189\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetQueryObjectivEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x118a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetQueryObjectuivEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x118b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetQueryObjecti64vEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x118c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetQueryObjectui64vEXT() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x118d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexStorage3DMultisampleOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x118e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}

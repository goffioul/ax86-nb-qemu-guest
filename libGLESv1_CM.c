__attribute__((naked,noinline)) void glAlphaFunc() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0400\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearColor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0401\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearDepthf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0402\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClipPlanef() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0403\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glColor4f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0404\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDepthRangef() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0405\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFogf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0406\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFogfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0407\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFrustumf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0408\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetClipPlanef() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0409\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetFloatv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x040a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetLightfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x040b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetMaterialfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x040c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexEnvfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x040d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexParameterfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x040e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightModelf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x040f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightModelfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0410\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0411\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0412\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLineWidth() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0413\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLoadMatrixf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0414\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMaterialf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0415\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMaterialfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0416\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMultMatrixf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0417\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMultiTexCoord4f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0418\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glNormal3f() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0419\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glOrthof() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x041a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPointParameterf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x041b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPointParameterfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x041c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPointSize() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x041d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPolygonOffset() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x041e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glRotatef() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x041f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glScalef() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0420\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexEnvf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0421\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexEnvfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0422\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterf() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0423\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterfv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0424\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTranslatef() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0425\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glActiveTexture() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0426\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glAlphaFuncx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0427\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindBuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0428\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindTexture() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0429\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendFunc() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x042a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBufferData() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x042b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBufferSubData() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x042c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClear() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x042d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearColorx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x042e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearDepthx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x042f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearStencil() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0430\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClientActiveTexture() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0431\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClipPlanex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0432\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glColor4ub() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0433\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glColor4x() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0434\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glColorMask() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0435\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glColorPointer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0436\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCompressedTexImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0437\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCompressedTexSubImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0438\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCopyTexImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0439\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCopyTexSubImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x043a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCullFace() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x043b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteBuffers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x043c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteTextures() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x043d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDepthFunc() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x043e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDepthMask() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x043f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDepthRangex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0440\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDisable() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0441\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDisableClientState() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0442\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawArrays() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0443\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawElements() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0444\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glEnable() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0445\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glEnableClientState() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0446\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFinish() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0447\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFlush() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0448\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFogx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0449\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFogxv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x044a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFrontFace() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x044b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFrustumx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x044c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetBooleanv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x044d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetBufferParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x044e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetClipPlanex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x044f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenBuffers() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0450\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenTextures() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0451\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetError() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0452\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetFixedv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0453\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetIntegerv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0454\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetLightxv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0455\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetMaterialxv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0456\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetPointerv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0457\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetString() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0458\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexEnviv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0459\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexEnvxv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x045a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x045b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexParameterxv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x045c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glHint() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x045d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsBuffer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x045e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsEnabled() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x045f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsTexture() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0460\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightModelx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0461\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightModelxv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0462\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0463\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightxv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0464\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLineWidthx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0465\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLoadIdentity() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0466\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLoadMatrixx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0467\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLogicOp() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0468\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMaterialx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0469\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMaterialxv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x046a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMatrixMode() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x046b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMultMatrixx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x046c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMultiTexCoord4x() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x046d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glNormal3x() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x046e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glNormalPointer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x046f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glOrthox() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0470\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPixelStorei() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0471\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPointParameterx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0472\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPointParameterxv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0473\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPointSizex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0474\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPolygonOffsetx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0475\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPopMatrix() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0476\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPushMatrix() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0477\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glReadPixels() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0478\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glRotatex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0479\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSampleCoverage() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x047a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSampleCoveragex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x047b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glScalex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x047c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glScissor() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x047d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glShadeModel() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x047e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glStencilFunc() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x047f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glStencilMask() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0480\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glStencilOp() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0481\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexCoordPointer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0482\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexEnvi() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0483\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexEnvx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0484\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexEnviv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0485\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexEnvxv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0486\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0487\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameteri() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0488\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterx() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0489\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameteriv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x048a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterxv() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x048b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexSubImage2D() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x048c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTranslatex() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x048d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexPointer() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x048e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glViewport() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x048f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPointSizePointerOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0490\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glEGLImageTargetTexture2DOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0491\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glEGLImageTargetRenderbufferStorageOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0492\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glQueryMatrixxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0493\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glAlphaFuncxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0494\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearColorxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0495\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearDepthxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0496\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClipPlanexOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0497\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glColor4xOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0498\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDepthRangexOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0499\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFogxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x049a\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFogxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x049b\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFrustumxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x049c\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetClipPlanexOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x049d\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetFixedvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x049e\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexEnvxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x049f\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexParameterxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04a0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightModelxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04a1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightModelxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04a2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04a3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLightxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04a4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLineWidthxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04a5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLoadMatrixxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04a6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMaterialxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04a7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMaterialxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04a8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMultMatrixxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04a9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMultiTexCoord4xOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04aa\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glNormal3xOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ab\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glOrthoxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ac\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPointParameterxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ad\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPointSizexOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ae\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPolygonOffsetxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04af\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glRotatexOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04b0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glScalexOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04b1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexEnvxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04b2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexEnvxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04b3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04b4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexParameterxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04b5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTranslatexOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04b6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetLightxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04b7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetMaterialxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04b8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPointParameterxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04b9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSampleCoveragexOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ba\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexGenxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04bb\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexGenxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04bc\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexGenxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04bd\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glColorPointerBounds() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04be\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glNormalPointerBounds() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04bf\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexCoordPointerBounds() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04c0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glVertexPointerBounds() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04c1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glPointSizePointerOESBounds() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04c2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMatrixIndexPointerOESBounds() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04c3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glWeightPointerOESBounds() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04c4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsRenderbufferOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04c5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindRenderbufferOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04c6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteRenderbuffersOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04c7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenRenderbuffersOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04c8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glRenderbufferStorageOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04c9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetRenderbufferParameterivOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ca\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsFramebufferOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04cb\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindFramebufferOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04cc\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteFramebuffersOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04cd\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenFramebuffersOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ce\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCheckFramebufferStatusOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04cf\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFramebufferRenderbufferOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04d0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFramebufferTexture2DOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04d1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetFramebufferAttachmentParameterivOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04d2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenerateMipmapOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04d3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glCurrentPaletteMatrixOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04d4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glLoadPaletteFromModelViewMatrixOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04d5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMatrixIndexPointerOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04d6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glWeightPointerOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04d7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBindVertexArrayOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04d8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteVertexArraysOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04d9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenVertexArraysOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04da\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsVertexArrayOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04db\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendFuncSeparateOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04dc\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClearDepthfOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04dd\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClipPlanefOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04de\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDepthRangefOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04df\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFrustumfOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04e0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetClipPlanefOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04e1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glOrthofOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04e2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawTexsOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04e3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawTexiOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04e4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawTexxOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04e5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawTexsvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04e6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawTexivOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04e7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawTexxvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04e8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawTexfOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04e9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDrawTexfvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ea\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexGenfOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04eb\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexGenfvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ec\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexGeniOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ed\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTexGenivOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ee\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexGenfvOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ef\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetTexGenivOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04f0\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glMapBufferOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04f1\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glUnmapBufferOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04f2\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetBufferPointervOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04f3\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendEquationOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04f4\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glBlendEquationSeparateOES() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04f5\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClipPlanefIMG() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04f6\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glClipPlanexIMG() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04f7\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glRenderbufferStorageMultisampleIMG() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04f8\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFramebufferTexture2DMultisampleIMG() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04f9\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glDeleteFencesNV() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04fa\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGenFencesNV() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04fb\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glIsFenceNV() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04fc\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glTestFenceNV() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04fd\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glGetFenceivNV() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04fe\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glFinishFenceNV() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x04ff\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void glSetFenceNV() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0500\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}

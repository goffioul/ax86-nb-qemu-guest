__attribute__((naked,noinline)) void __nb_slCreateEngine() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0600\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}
__attribute__((naked,noinline)) void __nb_SLObjectItf_Realize() {
    __asm__ volatile(
        "push {r0, r1, r2, r3}\n"
        "svc #0x0601\n"
        "add sp, sp, #16\n" 
        "bx lr"
    );
}

#include <libOpenSLES.common.c>

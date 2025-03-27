// stub_lock.c
// Stubs for missing reentrant lock symbols in newlib (e.g., __retarget_lock_init_recursive)

void __retarget_lock_init_recursive(void **lock) {
    (void)lock;
}

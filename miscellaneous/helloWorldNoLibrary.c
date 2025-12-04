//Gian Paraguya, 12/03/2025
//Ever wonder how to print hello world in C without all those bullshit libraries?
//well... here you go.
//nevermind i failed :(

void _start() {
    const char msg[] = "Hello, World!\n";
    asm volatile (
        "mov $0x55A4E8, %%rax\n"  // NtWriteFile syscall (unstable!)
        "mov $0xFFFFF804..., %%rcx\n"  // Handle (stdout, version-specific)
        // Additional params/mov for buffers, lengths...
        "syscall"
        "mov $0x55A4D0, %%rax\n"  // NtTerminateProcess
        "syscall"
        ::: "rax", "rcx"
    );
}

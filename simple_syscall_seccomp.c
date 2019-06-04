// gcc -g simple_syscall_seccomp.c -o simple_syscall_seccomp -lseccomp
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <seccomp.h>

int main(void) {
    scmp_filter_ctx ctx;
    ctx = seccomp_init(SCMP_ACT_ALLOW);
    seccomp_rule_add(ctx, SCMP_ACT_KILL, SCMP_SYS(execve), 0);
    seccomp_load(ctx);

    char * filename = "/bin/ls";
    char * argv[] = {"/bin/ls", "-l", "/home/zty/", NULL};
    char * envp[] = {NULL};
    char *notice = "I will list the files in /home/zty\n";
    // printf("size of notice: %d\n", sizeof(notice));
    write(1, notice, strlen(notice)+1);
    syscall(59, filename, argv, envp); // just as execve(filename, argv, envp)
    return 0;
}


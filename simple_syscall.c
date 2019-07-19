// gcc simple_syscall.c -o simple_syscall
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char * filename = "/bin/ls";
    char * argv[] = {"/bin/ls", "-l", "/home/zty/", NULL};
    char * envp[] = {NULL};
    char *notice = "I will list the files in /home/zty\n";
    // printf("size of notice: %d\n", sizeof(notice));
    write(1, notice, strlen(notice)+1);
    // just as execve(filename, argv, envp)
    syscall(59, filename, argv, envp);
    return 0;
}


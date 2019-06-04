// gcc -g simple-syscall.c -o simple-syscall
#include <unistd.h>

int main(void) {
    char * filename = "/bin/bash";
    char * argv[] = {"/bin/bash", NULL};
    char * envp[] = {NULL};
    write(1, "I will give you a shell\n", 24);
    syscall(59, filename, argv, envp); //execve
    return 0;
}


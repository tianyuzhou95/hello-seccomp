#  seccomp hand-on try

2019-6-4

### Overview

本文档对于Linux下的`seccomp`内核安全机制做了简要的研究，通过编写一个简单的syscall程序并运用seccomp将该syscall拦截，能够较为生动的描述seccomp的一些运作方式，同时对于Linux的系统调用有了进一步的理解。

### Reference

[seccomp学习笔记](https://veritas501.space/2018/05/05/seccomp学习笔记/)

[linux下man时括号里的数字意义](https://blog.csdn.net/cica0cica/article/details/47359233)

[seccomp(2) - Linux man](<http://man7.org/linux/man-pages/man2/seccomp.2.html>)

[execve(2) - Linux man](<http://man7.org/linux/man-pages/man2/execve.2.html>) 

[write(2) - Linux man](http://man7.org/linux/man-pages/man2/write.2.html)

[syscall(2) - Linux man](http://man7.org/linux/man-pages/man2/syscall.2.html)

[execve的使用方法](<https://blog.csdn.net/fisher_jiang/article/details/5608399>)

[Linux系统调用(syscall)原理](http://gityuan.com/2016/05/21/syscall/)

[Searchable Linux Syscall Table for x86 and x86_64](https://filippo.io/linux-syscall-table/)

[seccomp - ubuntu 18.04 LTS manuals](http://manpages.ubuntu.com/manpages/bionic/en/man2/seccomp.2.html)


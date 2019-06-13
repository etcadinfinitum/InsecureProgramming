# Insecure Programming

[A project by gera.](http://pages.cs.wisc.edu/~riccardo/sec/)

## Prerequisites

### Virtual Machines

Use a virtual machine. Many of the operations in the problem sset use unsafe C functions and system calls. For this problem set, [VirtualBox](https://www.virtualbox.org/) was used to run a lean installation of Debian, which is good enough for our purposes. VirtualBox is easy to use, even for novices _(ahem)_, and ensures that any experiment that might end in disaster does not affect the integrity of the host system (in this case, Fedora 29).

## Stack Exploitation

### Problem 1

```c
/* stack1.c
 * specially crafted to feed your brain by gera */

int main() {
	int cookie;
	char buf[80];

	printf("buf: %08x cookie: %08x\n", &buf, &cookie);
	gets(buf);

	if (cookie == 0x41424344)
		printf("you win!\n");
}
```

When I looked at this problem at first, I had no idea what I was looking at.
Reading [this article](https://dhavalkapil.com/blogs/Buffer-Overflow-Exploit/) was incredibly helpful.



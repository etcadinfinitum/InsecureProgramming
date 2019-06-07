# Insecure Programming

[A project by gera.](http://pages.cs.wisc.edu/~riccardo/sec/)

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



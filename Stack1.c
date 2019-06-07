#include <stdio.h>

/* <A HRef=stack1.c>stack1.c</a>                                     *
 * specially crafted to feed your brain by gera */

int main() {
	int cookie;
	char buf[80];

	printf("buf: %08x cookie: %08x\n", &buf, &cookie);
	gets(buf);

	if (cookie == 0x41424344)
		printf("you win!\n");
}

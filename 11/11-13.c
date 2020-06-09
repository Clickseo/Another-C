#include <stdio.h>
#include <stdlib.h>	// exit, atexit

void func1(void);
void func2(void);

int main(void)
{
	printf("Start...\n");

	atexit(func1);
	atexit(func2);

	printf("End...\n");

	exit(0);
}

void func1(void) {
	printf("Good Bye!!!\n");
}

void func2(void) {
	printf("Hi~ Clickseo!!!\n");
}

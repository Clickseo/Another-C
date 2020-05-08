#include <stdio.h>

// 매크로 정의
#define HELLO

#ifdef HELLO			// #if defined HELLO
int main(void)
{
	printf("Hello World!!! \n");

	return 0;
}
#else
int main(void)
{
	printf("Hi~ Clickseo!!! \n");

	return 0;
}
#endif

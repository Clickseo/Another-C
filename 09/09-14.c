#include <stdio.h>

// 매크로 이름 지정
#define HELLO

// 첫 번째 프로그램
#ifdef HELLO			// #if defined HELLO
int main(void)
{
	printf("Hello World!!! \n");
	return 0;
}
// 두 번째 프로그램
#else
int main(void)
{
	printf("Hi~ Clickseo!!! \n");
	return 0;
}
#endif

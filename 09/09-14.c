#include <stdio.h>

// ��ũ�� ����
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

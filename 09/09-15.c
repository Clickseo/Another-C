#include <stdio.h>

// ��ũ�� ����
#define CLICKSEO

#ifndef CLICKSEO		//#if !defined CLICKSEO
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

#include <stdio.h>
int main(void)
{
	int	a = 10;
	int	*p = &a;

	printf("a : %d \n", *p );			// 10
	printf("a : %d \n", (*p)++ );		// 10

	printf("a : %d \n", *p );			// 11
	printf("a : %d \n", *p++ );		// 11

	printf("a : %d \n", *p );			// ������ ��
	printf("a : %d \n", ++(*p) );		// ������ ��

	return 0;
}

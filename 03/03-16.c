#include <stdio.h>
int main(void)
{
	int	a = 10;
	int	*p = &a;

	printf("a : %d \n", *p );		// 10
	printf("a : %d \n", (*p)++ );		// 10

	printf("a : %d \n", *p );		// 11
	printf("a : %d \n", *p++ );		// 11

	printf("a : %d \n", *p );		// 쓰레기 값
	printf("a : %d \n", ++(*p) );		// 쓰레기 값

	return 0;
}

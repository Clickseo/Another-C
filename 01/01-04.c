#include <stdio.h>
int main(void)
{
	int	a;
	
	// a = 10;		// 변수 a에 10진수 10을 저장
	// a = 0x10;	// 변수 a에 16진수 10을 저장
	a = 010;		// 변수 a에  8진수 10을 저장

	printf(" 8진수 a: %o \n", a);	// 10
	printf("10진수 a: %d \n", a);	// 8
	printf("16진수 a: %x \n", a);	// 8

	return 0;
}

// 포인터 연산
#include <stdio.h>
int main(void)
{
	int		a = 10;
	int		*pa = &a;

	printf("&a : %p, pa : %p \n\n", &a, pa);

	// 피연산자가 포인형 변수와 정수형 상수인 경우...
	printf("pa + 1 : %p \n", pa + 1 );
	printf("pa - 1 : %p \n", pa - 1 );

	return 0;
}

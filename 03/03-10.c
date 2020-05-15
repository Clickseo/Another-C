// 포인터 연산 : 사칙 연산
#include <stdio.h>
int main(void)
{
	int	a = 10, b = 20;
	int	*pa, *pb;

	pa = &a;
	pb = &b;

	printf("pa : %p, pb : %p \n\n", pa, pb);

	// 2개의 피연산가 모두 포인터형 변수인 경우...
	printf("pa + pb : %d \n", pa + pb );	// error
	printf("pa - pb : %d \n", pa - pb );
	printf("pa * pb : %d \n", pa * pb );	// error
	printf("pa / pb : %d \n", pa / pb );	// error
	printf("pa % pb : %d \n", pa % pb );	// error

	return 0;
}

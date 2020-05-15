// 포인터 연산 : 관계 연산자와 비교 연산자 그리고 논리 연산자
#include <stdio.h>
int main(void)
{
	int	a = 10, b = 20;
	int	*pa, *pb;

	pa = &a;
	pb = &b;

	printf("pa : %p, pb : %p \n\n", pa, pb);

	printf("pa > pb  : %d \n", pa > pb );
	printf("pa < pb  : %d \n", pa < pb );
	printf("pa == pb : %d \n", pa == pb );
	printf("pa != pb : %d \n", pa != pb );

	printf("pa && pb : %d \n", pa && pb );
	printf("pa || pb   : %d \n", pa || pb );
	
	return 0;
}

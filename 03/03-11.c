// 포인터 연산
#include <stdio.h>
int main(void)
{
	int		a = 10;
	int		*pa = &a;

	printf("&a : %p, pa : %p \n\n", &a, pa);

	// 피연산자가 포인형 변수와 정수형 상수인 경우 +1과 -1의 의미
	// (가정) &a가 1000번지일 경우...	
	printf("pa + 1 : %p \n", pa + 1 );	// 1004		<-- sizeof(int) * (+1) 만큼 한 칸(4bytes)이동(high address)
	printf("pa - 1 : %p \n", pa - 1 );	//  996		<-- sizeof(int) * (-1) 만큼 한 칸(4bytes)이동(low address)

	return 0;
}

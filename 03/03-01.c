#include <stdio.h>
int main(void)
{
	int	a;		// 일반 변수 선언
	int	*p;		// 포인터형 변수 선언

	a = 10;		// 일반 변수의 데이터 저장
	p = &a;		// 포인터형 변수의 데이터 저장

	printf("a  : %d, %d \n", a, *p );	// a : 10, 10
	printf("&a : %p, %p \n", &a, p );

	return 0;
}

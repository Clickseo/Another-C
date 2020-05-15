// 포인터 연산 : 증감연산자(++, --)
#include <stdio.h>
int main(void)
{
	int	a = 10;
	int	*p = &a;

	printf("a : %d \n", *p );		// 10	<-- a	
	printf("a : %d \n", (*p)++ );		// 10	<-- (*p)++ == a++

	printf("a : %d \n", *p );		// 11	<-- a
	printf("a : %d \n", *p++ );		// 11	<-- *p++ : (1) *p(a), (2) p++

	// 프로그램 실행 시 Segmentation Fault 발생
	// 포인터형 변수 p는 &a의 주소 값을 갖고 있지 않음.
	printf("a : %d \n", *p );		// 쓰레기 값
	printf("a : %d \n", ++(*p) );		// 쓰레기 값	<-- ++(*p) == ++a

	return 0;
}

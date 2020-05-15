/*
	Segmentation Fault
		- 운영체제에서 사용하는 메모리 관리 및 보호의 한 기법
		- 프로그램이 허용되지 않은 메모리 영역에 접근을 시도하거나,
		  허용되지 않은 방법으로 메모리 영역에 접근을 시도할 경우 발생한다.
*/

#include <stdio.h>
int main(void)
{
	// 포인터형 변수의 자료형 : unsigned int
	int	*p = 10;

	// 프로그램 실행 시 Segmentation Fault 발생
	// 포인터형 변수가 저정하고 있는 데이터 10을 메모리 주소 10번지로 처리
	printf("*p : %d \n", *p );

	return 0;
}

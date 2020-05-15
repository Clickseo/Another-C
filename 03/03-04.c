/*
	Segmentation Fault
		- 운영체제에서 사용하는 메모리 관리 및 보호의 한 기법
		- 프로그램이 허용되지 않은 메모리 영역에 접근을 시도하거나,
		  허용되지 않은 방법으로 메모리 영역에 접근을 시도할 경우 발생한다.
*/

#include <stdio.h>
int main(void)
{
	int	*p = 10;	// warning C4047: '초기화 중': 'int *'의 간접 참조 수준이 'int'과(와) 다릅니다.

	// 프로그램 실행 시 Segmentation Fault 발생
	// 포인터형 변수가 저정하고 있는 데이터 10을 메모리 주소 10번지로 처리
	printf("*p : %d \n", *p );

	return 0;
}

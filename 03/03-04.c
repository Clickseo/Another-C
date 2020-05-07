#include <stdio.h>
int main(void)
{
	int	*p = 10;

	// 프로그램 실행 시 세그먼테이션 폴트 발생
	printf("*p : %d \n", *p );

	return 0;
}

#include <stdio.h>
int main(void)
{
	int	*p;

	// 프로그램 실행 시 세그먼테이션 폴트 발생
	*p = 10;

	return 0;
}

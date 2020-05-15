#include <stdio.h>
int main(void)
{
	// 초기화되지않은 지역 변수 p
	int	*p;

	// 프로그램 실행 시 Segmentation Fault 발생
	*p = 10;

	return 0;
}

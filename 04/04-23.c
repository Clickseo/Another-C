#include <stdio.h>

void  SUM(int);

int main(void)
{
	for (int i=0; i<10; i++)
		SUM(i);

	return 0;
}

// 지역 정적 변수는 처음 함수 호출 시 한 번만 초기화 된다.
void  SUM(int num) {	
	static  int	sum = 0;	// 지역정적변수: 자동 초기화 -- 0

	sum += num;

	printf("num = %d, sum = %d \n", num, sum);
}

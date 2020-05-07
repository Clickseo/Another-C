#include <stdio.h>
void  SUM(int);
int main(void)
{
	int	i;

	for (i=0; i<10; i++)
		SUM(i);

	return 0;
}

void  SUM(int num)
{
	// 지역 정적 변수는 처음 함수 호출 시 한 번만 초기화
	static  int	sum = 0;

	sum += num;

	printf("num = %d, sum = %d \n", num, sum);
}

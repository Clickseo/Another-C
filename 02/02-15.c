// 임의의 정수(10진수)를 2진수 형태로 변환하여 출력
#include <stdio.h>
int main(void)
{
	_Bool	state;
	int	num, size;

	printf("임의의 정수 입력 : ");
	scanf_s("%d", &num);
	// scanf("%d", &num);

	// 자료형(int)의 총 비트 계산
	size = sizeof(int) * 8;
	
	for(int i=1; i<=size; i++)
	{
		// 각 자리의 비트가 1또는 0인지 판단
		state  =  num  >>  (size  -  i)  &  1;

		if(state)	putchar('1');
		else		putchar('0');

		// 4비트씩 끊어서 출력
		if(i%4 == 0)	putchar(' ');
	}
	putchar('\n');

	return 0;
}

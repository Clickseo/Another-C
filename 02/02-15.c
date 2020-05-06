#include <stdio.h>
int main(void)
{
	int	i, size, state, num;

	printf("임의의 정수 입력 : ");
	scanf("%d", &num);

	// 주어진 자료형이 할당 받은 총 비트 계산
	size = sizeof(int) * 8;

	for(i=1; i<=size; i++)
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

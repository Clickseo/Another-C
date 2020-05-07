#include <stdio.h>
int main(void)
{
	int	a, b, c, d, max;

	printf("4개의 정수 입력 : ");
	scanf_("%d %d %d %d", &a, &b, &c, &d);		// scanf("%d %d %d %d", &a, &b, &c, &d);

	// 4개의 정수 값 중에서 최대값을 구하는 부분
	if(a > b)	max = a;
	else		max = b;

	if(c > max)	max = c;
	if(d > max)	max = d;

	printf("최대값 : %d \n", max);

	return 0;
}

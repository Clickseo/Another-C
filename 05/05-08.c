// 배열과 포인터: 배열 원소의 순방향과 역방향 출력
#include <stdio.h>

#define arrMAXSIZE 5

int main(void)
{
	int	arr[arrMAXSIZE] = { 10, 20, 30, 40, 50 };
	int*	p = arr;			// int* p = &arr[0];	

	printf("순방향 출력: ");
	for ( ; p < arr + arrMAXSIZE;  p++ )
		printf("%3d", *p );
	printf("\n");

	printf("역방향 출력: ");	
	p = arr + arrMAXSIZE - 1;		// p = &arr[4];
	for ( ; p >= arr;  p-- )
		printf("%3d", *p );
	printf("\n");

	return 0;
}

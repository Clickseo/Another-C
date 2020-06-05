#include <stdio.h>

#define arrMAXSIZE 10

int main(void)
{
	int	arr[arrMAXSIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// 배열의 순방향 출력: arr[0] --> arr[9]
	for(int i=0; i<arrMAXSIZE; i++)
		printf("%3d", arr[i]);
	printf("\n");

	// 배열의 역방향 출력: arr[9] --> arr[0]
	for(int i=arrMAXSIZE-1; i>=0; i--)
		printf("%3d", arr[i]);
	printf("\n");

	return 0;
}

#include <stdio.h>
#define MAX_SIZE 10
int main(void)
{
	int	i;
	int	arr[MAX_SIZE] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10};

	// 배열의 순방향 출력
	for(i=0; i<MAX_SIZE; i++)
		printf("%3d", arr[i]);
	printf("\n");

	// 배열의 역방향 출력
	for(i=MAX_SIZE-1; i>=0; i--)
		printf("%3d", arr[i]);
	printf("\n");

	return 0;
}

#include <stdio.h>

#define MAX_SIZE 5

int main(void)
{
	int	arr[MAX_SIZE] = { 10, 20, 30, 40, 50 };
	int	*p;


	printf("순방향 출력 : ");
	p = arr;				// p = &arr[0];	
	for ( ; p < arr + MAX_SIZE;  p++ )
		printf("%3d", *p );
	printf("\n");

	printf("역방향 출력 : ");	
	p = arr + MAX_SIZE - 1;			// p = &arr[4];
	for ( ; p >= arr;  p-- )
		printf("%3d", *p );
	printf("\n");

	return 0;
}

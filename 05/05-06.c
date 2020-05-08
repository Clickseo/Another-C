#include <stdio.h>

#define MAX_SIZE 3

int main(void)
{
	int	arr[MAX_SIZE];

	for(int i=0; i<MAX_SIZE; i++)
		scanf_s("%d", arr + i );      // scanf("%d", &arr[i] );

	for(i=0; i<MAX_SIZE; i++)
		// printf("arr[%d]: %d \n", i, arr[i] );
		printf("arr[%d]: %d \n", i, *(arr + i) );

	return 0;
}

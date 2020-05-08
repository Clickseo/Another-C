#include <stdio.h>

#define MAX_SIZE 5

int main(void)
{
	int	arr[MAX_SIZE] = {10, 20, 30, 40, 50};
	int	*p;

	p = arr;		// p = &arr[0];

	for(int i=0; i<MAX_SIZE; i++)
		printf("arr[%d]: %d, %d \n", i, arr[i], *(p+i));

	return 0;
}

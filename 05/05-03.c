#include <stdio.h>
#define MAX_SIZE 10
int main(void)
{
	int	i;
	int	arr[MAX_SIZE] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10};

	// �迭�� ������ ���
	for(i=0; i<MAX_SIZE; i++)
		printf("%3d", arr[i]);
	printf("\n");

	// �迭�� ������ ���
	for(i=MAX_SIZE-1; i>=0; i--)
		printf("%3d", arr[i]);
	printf("\n");

	return 0;
}

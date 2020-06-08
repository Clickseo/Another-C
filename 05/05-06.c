// 배열과 포인터
#include <stdio.h>

#define arrMAXSIZE 3

int main(void)
{
	int	arr[arrMAXSIZE];

	// &arr[i] == &*(arr+i) == arr+i
	for(int i=0; i<arrMAXSIZE; i++)
		scanf_s("%d", arr + i );      // scanf("%d", &arr[i] );

	// arr[i] == *(arr+i)
	for(int i=0; i<arrMAXSIZE; i++)
		// printf("arr[%d]: %d \n", i, arr[i] );
		printf("arr[%d]: %d \n", i, *(arr + i) );

	return 0;
}

// 배열과 포인터
#include <stdio.h>

#define arrMAXSIZE 5

int main(void)
{
	int	arr[arrMAXSIZE] = {10, 20, 30, 40, 50};
	int*	p;

	p = arr;		// p = &arr[0];

	// arr[i] == p[i] == *(p+i)
	for(int i=0; i<arrMAXSIZE; i++)
		printf("arr[%d]: %d, %d \n", i, arr[i], *(p+i));

	return 0;
}

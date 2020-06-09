// 다중 포인터와 포인터 배열
#include <stdio.h>

#define arrMAXSIZE 3

int main(void)
{
	int	a, b, c;
	int	*arr[arrMAXSIZE] = { &a, &b, &c };	// 포인터 배열
	int	**pArr;					// 이중 포인터

	pArr = arr;		// pArr = &arr[0];

	printf("%3d개의 정수 입력: ", arrMAXSIZE);
	for(int i=0; i<arrMAXSIZE; i++)
		scanf_s("%d", *(pArr+i));		// scanf_s("%d", arr[i]);

	printf("\n### 결과 출력 ### \n");
	for(int i=0; i<arrMAXSIZE; i++)
		printf("%d \n", **(pArr+i));		// scanf_s("%d", *arr[i]);

	return 0;
}

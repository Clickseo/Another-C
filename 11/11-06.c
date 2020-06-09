// 포인터 배열
#include <stdio.h>

#define arrMAXSIZE 3

int main(void)
{
	int	a, b, c;
	int*	arr[arrMAXSIZE] = { &a, &b, &c };	// 포인터 배열

	// arr[0] = &a;
	// arr[1] = &b;
	// arr[2] = &c;
	printf("%3d개의 정수 입력: ", arrMAXSIZE);
	for(int i=0; i<arrMAXSIZE; i++)
		scanf_s("%d", *(arr+i));		// scanf_s("%d", arr[i]));

	printf("\n### 결과 출력 ### \n");
	for(int i=0; i<arrMAXSIZE; i++)
		printf("%d \n", **(arr+i));

	return 0;
}

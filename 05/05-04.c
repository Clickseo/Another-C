// 히스토그램 출력
#include <stdio.h>

#define arrMAXSIZE 10

int main(void) 
{
	int	arr[arrMAXSIZE]; 

	// 사용자로부터 배열의 원소 개수만큼 입력 받는다.
	printf("%d개의 배열 원소를 입력하시오!!! \n", arrMAXSIZE);
	for(int i = 0; i < arrMAXSIZE ; i++) {
		printf("arr[%d]: ", i);
		scanf_s("%d", &arr[i]);		// scanf("%d", &arr[i]);
	}

	// 배열 원소들의 데이터 값을 히스토그램 형식으로 출력
	printf("\n\n    배열 첨자 값 \t 히스토그램\n");
	for(int i = 0; i < arrMAXSIZE ; i++) {
		printf("\t%d %5d \t", i, arr[i] );	// 배열 원소의 색인(첨자)과 데이터 값 출력	
		for(int j = 0; j < arr[i]; j++)		// 배열의 i번째 원소 개수만큼 눈표(*)를 출력
			printf("*");
		printf("\n");
	}

	return 0;
}

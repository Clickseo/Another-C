#include <stdio.h>
#define MAX_SIZE 10
int main(void) 
{
	int	i, j, arr[MAX_SIZE]; 

	// 사용자로부터 배열의 원소 개수만큼 입력 받는다.
	printf("%d개의 배열 원소를 입력하시오!!! \n", MAX_SIZE);
	for(i = 0; i < MAX_SIZE ; i++)
	{
		printf("arr[%d]: ", i);
		scanf_s("%d", &arr[i]);		// scanf("%d", &arr[i]);
	}

	// 배열의 각 원소의 데이터를 히스토그램 형식으로 출력
	printf("\n\n    배열 첨자 값 \t 히스토그램\n");
	for(i = 0; i < MAX_SIZE ; i++)
	{
		printf("\t%d %5d \t", i, arr[i] );
		// 배열의 i번째 원소 개수만큼 눈표(*)를 출력
		for(j = 0; j < arr[i]; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}

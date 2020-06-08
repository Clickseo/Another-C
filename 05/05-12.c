// 배열과 함수: 전체 배열 전달
#include <stdio.h>

#define arrMAXSIZE 3

// 함수 원형: 전체 배열 원소를 출력하기 위한 OUTPUT 함수
void	OUTPUT(int *, int);

int main(void)
{
	int	arr[arrMAXSIZE] = { 10, 20, 30 };

	// 함수 호출: 배열 전체 원소 출력을 위한 OUTPUT 함수
	OUTPUT(arr, arrMAXSIZE);

	return 0;
}

// 함수 정의: 전체 배열 원소를 출력하기 위한 OUTPUT 함수
void	OUTPUT(int *p, int num) {
	for(int i=0; i<num; i++)
		printf("arr[%d]: %d \n", i, *(p+i) );
	return;
}

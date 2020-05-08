#include <stdio.h>
#define MAX_SIZE 3

// 전체 배열 원소를 출력하기 위한 OUTPUT( ) 함수 원형 선언
void	OUTPUT(int *, int);

int main(void)
{
	int	arr[3] = {10, 20, 30};

	// 배열 전체 원소 출력을 위한 OUTPUT( ) 함수 호출
	OUTPUT(arr, MAX_SIZE);

	return 0;
}

// 전체 배열 원소를 출력하기 위한 OUTPUT( ) 함수 정의
void	OUTPUT(int *p, int n)
{
	int	i;

	for(i=0; i<n; i++)
		printf("arr[%d]: %d \n", i, *(p+i) );

	return;
}

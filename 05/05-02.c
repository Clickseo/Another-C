#include <stdio.h>

// 매크로 상수: 배열의 원소 개수
#define MAX_SIZE 3

int main(void)
{
	int	i;
	// 매크로 상수를 이용한 배열 원소 개수 지정
	int	arr[MAX_SIZE];		// int	arr[3];

	// 사용자로부터 3개의 정수형 데이터 입력
	for(i=0; i<MAX_SIZE; i++)
		scanf("%d", &arr[i] );

	// 배열에 저장되어 있는 데이터 출력
	for(i=0; i<MAX_SIZE; i++)
		printf("arr[%d]: %d \n", i, arr[i] );

	return 0;
}

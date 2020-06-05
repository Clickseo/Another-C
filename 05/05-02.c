#include <stdio.h>

// 매크로 상수: 배열의 원소 개수
#define arrMAXSIZE 3

int main(void)
{
	// 배열 선언: 메모리 할당
	int	arr[arrMAXSIZE];		// int	arr[3];

	// 사용자로부터 임의의 정수 3개에 대하여 입력 처리
	for(int i=0; i<arrMAXSIZE; i++)
		scanf_s("%d", &arr[i] );	// scanf("%d", &arr[i] );

	// 배열에 저장되어 있는 데이터 출력
	for(int i=0; i<arrMAXSIZE; i++)
		printf("arr[%d]: %d \n", i, arr[i] );

	return 0;
}

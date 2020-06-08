// 배열과 함수: 개별 원소 전달
#include <stdio.h>

#define arrMAXSIZE 3

// 함수 원형 : 3개의 배열 원소를 출력하기 위한 OUTPUT 함수
void	OUTPUT(int, int, int);

int main(void)
{
	int	arr[arrMAXSIZE] = {10, 20, 30};

	// 함수 호출: 3개의 배열 원소를 함수 인자로 넘겨 OUTPUT 함수 호출
	OUTPUT(arr[0], arr[1], arr[2]);

	return 0;
}

// 함수 정의: 3개의 변수를 출력하는 OUTPUT 함수
void	OUTPUT(int a, int b, int c) {
	printf("a: %d, b: %d, c: %d \n", a, b, c);
}

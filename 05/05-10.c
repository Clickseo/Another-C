#include <stdio.h>
#define MAX_SIZE 3

// 정수 데이터 하나를 출력하는 OUTPUT( ) 함수 선언
void	OUTPUT(int);
int main(void)
{
	int	i;
	int	arr[3] = {10, 20, 30};

	// 배열의 원소 개수만큼 OUTPUT( ) 함수 호출을 반복
	for(i=0; i<MAX_SIZE; i++)
		OUTPUT(arr[i]);

	return 0;
}

// 정수 데이터 하나를 출력하는 OUTPUT( ) 함수 정의
void	OUTPUT(int temp)
{
	printf("temp: %d \n", temp );
}

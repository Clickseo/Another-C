// 배열의 이해: 배열 선언 및 데이터 저장과 출력
#include <stdio.h>
int main(void)
{
	// 배열 선언: 메모리 할당
	int	arr[3];

	// 각각의 배열 원소에 데이터 저장
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	printf("배열이 할당 받은 메모리 크기: %d \n\n", sizeof(arr));

	// 각각의 배열 원소에 저장된 데이터 출력
	printf("arr[0]: %d \n", arr[0] );
	printf("arr[1]: %d \n", arr[1] );
	printf("arr[2]: %d \n", arr[2] );

	return 0;
}

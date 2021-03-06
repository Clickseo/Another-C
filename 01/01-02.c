#include <stdio.h>
int main(void)
{
	// 변수 선언: 데이터를 저장할 메모리 공간 확보!!!
	int	a;

	// 사용자로부터 데이터를 입력받아 메모리에 저장
	printf("임의의 정수 입력: ");
	scanf_s("%d", &a);		// scanf("%d", &a);

	// 메모리에 저장된 데이터를 화면에 출력
	printf("a: %d \n", a);

	return 0;
}

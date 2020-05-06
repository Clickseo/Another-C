#include <stdio.h>
int main(void)
{
	int	a;

	// 사용자로부터 데이터 입력 처리
	printf("임의의 정수 입력 : ");
	scanf_s("%d", &a);		// scanf("%d", &a);

	// 사용자에게 입력 받은 데이터 출력
	printf("a : %d \n", a);

	return 0;
}

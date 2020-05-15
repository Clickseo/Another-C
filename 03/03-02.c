#include <stdio.h>
int main(void)
{
	int	a;
	int	*p = &a;	// 포인터형 변수의 선언 및 초기화

	// &a ==  p	
	printf("임의의 정수 입력 : ");
	scanf_s("%d", p);		// scanf("%d", p);

	printf("a : %d \n", a);

	return 0;
}

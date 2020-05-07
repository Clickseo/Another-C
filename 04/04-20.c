#include <stdio.h>
void	OUTPUT(void);
int main(void)
{
	// 지역 변수 선언 및 초기화
	int	a = 10;

	printf("a : %d \n", a);		// 10
	{
		// 지역 변수 선언 및 초기화
		int	a = 20;
		printf("a : %d \n", a);	// 20
	}
	printf("a : %d \n", a);		// 10

	OUTPUT();

	return 0;
}

void	OUTPUT(void)
{
	// 지역 변수 선언 및 출력
	int	a;
	printf("a : %d \n", a);	// 쓰레기 값
}

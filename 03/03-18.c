// void형 포인터 변수
#include <stdio.h>
int main(void)
{
	int	a;
	void	*p = &a;

	printf("임의의 정수 입력 : ");
	scanf_s("%d", (int *)p);		// scanf("%d", (int *)p);

	*(int *)p = *(int *)p + 1;		// a = a + 1;

	printf("a : %d \n", *(int *)p );

	return 0;
};

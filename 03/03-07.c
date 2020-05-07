#include <stdio.h>
int main(void)
{
	int	a = 10;
	int	b = 20;
	const int *pa = &a;

	printf("a : %d, *pa : %d \n", a, *pa);
	a = 50;	// 메모리 직접 접근은 가능!!!

	*pa = 20;	// error : 대상체의 데이터 변경 불가!!!
	pa = &b;	// 포인터 pa의 메모리 주소는 변경 가능!!!

	return 0;
}

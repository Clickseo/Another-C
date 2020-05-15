#include <stdio.h>
int main(void)
{
	int	a = 10;
	int	b = 20;
	
	const int * const pa = &a;

	printf("a : %d, *pa : %d \n", a, *pa);
	
	a = 50;		// 메모리 직접 접근(a)은 가능!!!
	
	*pa = 20;	// (X) error : 대상체(변수 a)의 메모리 공간(데이터) 변경은 불가!!!
	pa = &b;	// (X) error : 포인터 pa의 메모리 공간(&p) 변경은 불가(즉, 읽기만 가능)

	return 0;
}

#include <stdio.h>
int main(void)
{
	int	a = 10;
	int	b = 20;
	
	// 포인터형 변수 pa는 간접 접근을 통해 대상체(변수 a)의 메모리 공간을 읽기만 가능
	const int *pa = &a;

	printf("a : %d, *pa : %d \n", a, *pa);
	
	a = 30;		// 메모리 직접 접근(a)은 가능!!!
	*pa = 40;	// (X) error : 대상체(변수 a)의 메모리 공간(데이터) 변경은 불가!!!
	
	pa = &b;	// (O) 포인터 pa의 메모리 공간 변경은 가능(즉, 읽기와 쓰기 모두 가능)

	return 0;
}

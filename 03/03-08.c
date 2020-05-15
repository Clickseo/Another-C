#include <stdio.h>
int main(void)
{
	int	a = 10;
	int	b = 20;
	
	// 포인터형 변수 pa의 메모리 공간(&p)을 상수화 시킨다.
	// 즉, 프로그램 종료시까지 포인터형 변수 pa의 값은 변수 a의 주소(&p)로 고정된다.
	int * const pa = &a;

	printf("a : %d, *pa : %d \n", a, *pa);

	a = 50;		// 메모리 직접 접근(a)은 가능!!!
	*pa = 20;	// (O) 대상체(변수 a)의 메모리 공간(데이터) 변경은 가능(즉, 읽기와 쓰기 모두 가능)
	
	pa = &b;	// (X) error : 포인터 pa의 메모리 공간(&p) 변경은 불가(즉, 읽기만 가능)

	return 0;
}

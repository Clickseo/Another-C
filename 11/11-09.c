// 함수 포인터 : 직접 호출과 간접 호출
#include <stdio.h>
int main(void)
{
	int	(*p)(void) = main;

	printf("main : %p \n", main);
	printf("p    : %p \n", p);

	// main();			// 직접 호출
	p();				// 간접 호출

	return 0;
}

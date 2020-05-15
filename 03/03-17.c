// void형 포인터 변수
#include <stdio.h>
int main(void)
{
	int	a = 10;
	void	*p;

	p = &a;

	printf("a : %d \n", *p );	// error : 간접 참조가 잘못 되었습니다.

	return 0;
}

// 다중 포인터
#include <stdio.h>
int main(void)
{
	// pp --> p --> a
	int	a = 10;
	int	*p = &a;
	int	**pp = &p;

	printf("a    : %d \n", a);		// 10
	printf("*p   : %d \n", *p);		// 10
	printf("**pp : %d \n", **pp);		// 10

	return 0;
}

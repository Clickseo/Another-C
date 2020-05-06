#include <stdio.h>
int main(void)
{
	int	a = 10;

	printf("a      = %d\n", a);			// 10
	printf("a << 1 = %d\n", a << 1);		// 20
	printf("a << 2 = %d\n", a << 2);		// 40
	printf("a << 3 = %d\n", a << 3);		// 80
	printf("a << 4 = %d\n", a << 4);		// 160

	return 0;
}

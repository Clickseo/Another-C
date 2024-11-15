#include <stdio.h>
int main(void)
{
	int	a = 1024;

	printf("a      = %d\n", a);			// 1024
	printf("a >> 1 = %d\n", a >> 1);		// 512
	printf("a >> 2 = %d\n", a >> 2);		// 256
	printf("a >> 3 = %d\n", a >> 3);		// 128
	printf("a >> 4 = %d\n", a >> 4);		// 64

	return 0;
}

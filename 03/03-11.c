#include <stdio.h>
int main(void)
{
	int		a = 10;
	int		*pa = &a;

	printf("&a : %p, pa : %p \n\n", &a, pa);

	printf("pa + 1 : %p \n", pa + 1 );
	printf("pa - 1 : %p \n", pa - 1 );

	return 0;
}

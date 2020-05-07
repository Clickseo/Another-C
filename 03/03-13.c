#include <stdio.h>
int main(void)
{
	int	a = 10, b = 20;
	int	*pa, *pb;

	pa = &a;
	pb = &b;

	printf("pa : %p, pb : %p \n\n", pa, pb);

	printf("pa > pb  : %d \n", pa > pb );
	printf("pa < pb  : %d \n", pa < pb );
	printf("pa == pb : %d \n", pa == pb );
	printf("pa != pb : %d \n", pa != pb );

	printf("pa && pb : %d \n", pa && pb );
	printf("pa || pb   : %d \n", pa || pb );
	
	return 0;
}

#include <stdio.h>
int main(void)
{
	int	a = 10, b = 20, max;
	int	*pa, *pb;

	pa = &a;
	pb = &b;

	if(*pa > *pb)	max = *pa;		// max = a;
	else		max = *pb;		// max = b;

	printf("큰 값 : %d \n", max);

	return 0;
}

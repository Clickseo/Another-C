#include <stdio.h>
int main(void)
{
	int		a = 10, b = 20, max;
	int		*pa, *pb;

	pa = &a;
	pb = &b;

	if(*pa > *pb)	max = *pa;		// max = a;
	else		max = *pb;		// max = b;

	printf("Å« °ª : %d \n", max);

	return 0;
}

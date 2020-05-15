#include <stdio.h>
int main(void)
{
	int	a, b, c, d, min;
	int	*pa, *pb, *pc, *pd;

	pa = &a;
	pb = &b;
	pc = &c;
	pd = &d;

	printf("4개의 정수 입력 : ");
	scanf_s("%d %d %d %d", pa, pb, pc, pd);		// scanf("%d %d %d %d", pa, pb, pc, pd);
	
	// if(a > b)
	if(*pa < *pb)		min = *pa;	// min = a;
	else			min = *pb;	// min = b;

	// if(c < min)
	if(*pc < min)		min = *pc;	// min = c;
	
	// if(d < min)
	if(*pd < min)		min = *pd;	// min = d;

	printf("최소값 : %d \n", min);

	return 0;
}

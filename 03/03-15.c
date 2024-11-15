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
	scanf_s("%d %d %d %d", pa, pb, pc, pd);
	// scanf("%d %d %d %d", pa, pb, pc, pd);
	
	if(*pa < *pb)	min = *pa;	// if(a > b)	min = a;
	else		min = *pb;	// else		min = b;
	
	if(*pc < min)	min = *pc;	// if(c < min)	min = c;		
	if(*pd < min)	min = *pd;	// if(d < min)	min = d;	
	
	printf("최솟값 : %d \n", min);

	return 0;
}

#include <stdio.h>
int main(void)
{
	int	a, b, c, d, min;
	int	*pa, *pb, *pc, *pd;

	pa = &a;
	pb = &b;
	pc = &c;
	pd = &d;

	printf("4���� ���� �Է� : ");
	scanf("%d %d %d %d", pa, pb, pc, pd);

	if(*pa < *pb)		min = *pa;
	else			min = *pb;

	if(*pc < min)		min = *pc;
	if(*pd < min)		min = *pd;

	printf("�ּҰ� : %d \n", min);

	return 0;
}

#include <stdio.h>
int main(void)
{
	int	a, b, res;
	int	*pa, *pb;

	pa = &a;
	pb = &b;

	printf("������ �� ���� �Է� : ");
	scanf("%d %d", pa, pb);

	res = *pa + *pb;		// res = a + b;

	printf("%d + %d = %d \n", a, b, res);

	return 0;
}

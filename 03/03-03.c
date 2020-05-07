#include <stdio.h>
int main(void)
{
	int	a, b, res;
	int	*pa, *pb;

	pa = &a;
	pb = &b;

	printf("임의의 두 정수 입력 : ");
	scanf("%d %d", pa, pb);

	res = *pa + *pb;		// res = a + b;

	printf("%d + %d = %d \n", a, b, res);

	return 0;
}

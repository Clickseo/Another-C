#include <stdio.h>
int main(void)
{
	int	a, b, res;
	int	*pa, *pb;

	pa = &a;
	pb = &b;

	// &a ==  pa	
	// &b == pb
	printf("임의의 두 정수 입력 : ");
	scanf_s("%d %d", pa, pb);
	// scanf("%d %d", pa, pb);

	// a == *pa
	// b == *pb
	res = *pa + *pb;			// res = a + b;

	printf("%d + %d = %d \n", a, b, res);

	return 0;
}

// 다중 포인터
#include <stdio.h>
int main(void)
{
	// pp --> p --> a
	int		a;
	int		*p = &a;
	int		**pp = &p;

	scanf_s("%d", &a);
	printf("a : %d \n", a);

	scanf_s("%d", p);		// scanf_s("%d", &a);
	printf("a : %d \n", a);

	scanf_s("%d", *pp);		// scanf_s("%d", &a);
	printf("a : %d \n", a);

	return 0;
}

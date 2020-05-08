#include <stdio.h>
int main(void)
{
	int		a;
	int		*p = &a;
	int		**pp = &p;

	scanf("%d", &a);
	printf("a    : %d \n", a);

	scanf("%d", p);			// scanf("%d", &a);
	printf("a    : %d \n", a);

	scanf("%d", *pp);			// scanf("%d", &a);
	printf("a    : %d \n", a);

	return 0;
}

#include <stdio.h>

// 매크로 함수
#define	DIV(a, b)	((a) / (b))

int main(void)
{
	int		res1;
	double		res2;

	res1 = DIV(10, 3);
	res2 = DIV(10.0, 3.0);

	printf("res1 = %d \n", res1);		// res1 = 3
	printf("res2 = %.1f \n", res2);		// res2 = 3.3

	return 0;
}

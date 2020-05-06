#include <stdio.h>
int main(void)
{
	double	a = 0.000000001;
	double	b = 3.14159265;

	printf("a : %f \n", a);		// 0.000000
	printf("a : %e \n", a);		// 1.000000e-009

	printf("a : %f \n", b);		// 3.141593
	printf("a : %e \n", b);		// 3.141593e+000

	return 0;
}

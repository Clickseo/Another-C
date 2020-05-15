#include <stdio.h>
int main(void)
{
	int		r = 10;			// r : 원의 반지름
	double		res;
	const double	PI = 3.14159;		// 기호 상수 : 원주율

	res = r * r * PI;			// 314.159000

	printf("원주율: %f \n", res);

	return 0;
}

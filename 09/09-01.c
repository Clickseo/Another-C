#include <stdio.h>
// 매크로 상수
#define	 PI  3.14159
int main(void)
{
	double		area, radius;

	printf("원의 반지름 입력 : ");
	scanf("%lf", &radius);

	area = radius * radius * PI;

	printf("\n원의 면적 %.2f\n", area);

	return 0;
}

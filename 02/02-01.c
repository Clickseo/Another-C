// 부동 소수점 오차 : 컴퓨터는 근사치로 실수를 표현한다.
#include <stdio.h>
int main(void)
{
	int	i; 
	float	f = 0.0f;

	for(i=0; i<100; i++)
		f += 0.1f;		// 0.1f : 실수형 상수(float)
					// 0.1  : 실수형 상수(double)
	printf("%f \n", f);		// 10.000002

	return 0;
}

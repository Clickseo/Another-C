// 레지스터 변수
#include <stdio.h>
int main(void)
{
	register	int	i,  j;

	double sum = 0;

	for(i=0; i<=10000; i++)
	{
		for(j=0; j<=10000; j++)
			sum += i * j;
	}

	printf("sum = %f \n", sum);

	return 0;
}

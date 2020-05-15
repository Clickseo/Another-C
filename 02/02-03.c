#include <stdio.h>
int main(void)
{
	char	ch = 'A';
	int	i = 10;
	float	f = 10.5f;
	double	res;

	res = ch + i + f;		// (자동) 형 변환

	printf("res : %.2f \n", res);	// 85.50

	return 0;
}

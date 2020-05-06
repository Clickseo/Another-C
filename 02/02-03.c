#include <stdio.h>
int main(void)
{
	char	ch = 'A';
	int	i = 10;
	float	f = 10.5;
	double	res;

	res = ch + i + f;

	printf("res : %.2f \n", res);	// 85.50

	return 0;
}

#include <stdio.h>
int	DIV(int, int);
int main(void)
{
	double		res;

	res = DIV(10.0, 3.0);

	printf("res = %.1f \n", res);	// res = 3.0

	return 0;
}

int	DIV(int a, int b)	{	return a / b;		}

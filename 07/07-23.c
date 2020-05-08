#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int	a, b, res;
	char	str1[12] = "10";
	char	str2[12] = "20";

	a = atoi(str1);	// a = 10;
	b = atoi(str2);	// b = 20;

	res = a + b;		// res = 10 + 20;

	printf("%d + %d = %d \n", a, b, res);	// 10, 20, 30

	return 0;
}

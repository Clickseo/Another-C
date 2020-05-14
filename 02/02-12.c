#include <stdio.h>
int main(void)
{
	int	a = 0x0012FF7C;			// int	a = 1245052;
	int	b = 0x0000FFFF;			// int	b = 65535;

	printf("a & b : %08X, %d\n", a&b, a&b);  // 0000FF7C, 65404
	printf("a | b : %08X, %d\n", a|b, a|b);  // 0012FFFF, 1245183
	printf("a ^ b : %08X, %d\n", a^b, a^b);  // 00120083, 1179779

	return 0;
}

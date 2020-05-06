#include <stdio.h>
int main(void)
{
	unsigned char		ch;
	int			i = 128;

	ch = i;

	printf("ch : %d \n", ch);		// 128
	printf(" i : %d \n", i);		// 128

	return 0;
}

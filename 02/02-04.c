#include <stdio.h>
int main(void)
{
	char	ch = 'A';

	printf("ch : %d \n", sizeof(ch));		// 1
	printf("A  : %d \n", sizeof('A'));		// 4

	return 0;
}

#include <stdio.h>
int main(void)
{
	unsigned int	i = 4294967295;

	printf("i : %d \n", i);	// -1
	printf("i : %u \n", i);	// 4294967295

	return 0;
}

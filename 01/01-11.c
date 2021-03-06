#include <stdio.h>
int main(void)
{
	unsigned int	i = 4294967295;

	// %d : 부호 있는 10진수 출력(signed)
	// %u : 부호 없는 10진수 출력(unsigned)
	printf("i: %d \n", i);			// -1
	printf("i: %u \n", i);			// 4294967295

	return 0;
}

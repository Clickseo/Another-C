#include <stdio.h>
#include <string.h>

int main(void)
{
	int	a = 1;
	int	b = -1;
	int	res;

	res = memcmp(&a, &b, sizeof(int));

	printf("res : %d \n", res);			// -1

	return 0;
}

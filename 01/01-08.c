#include <stdio.h>
int main(void)
{
	printf("     short int: %d바이트\n", sizeof(short int));
	printf("            int: %d바이트\n", sizeof(int));
	printf("      long int: %d바이트\n", sizeof(long int));
	printf("long long int: %d바이트\n", sizeof(long long int));
	return 0;
}

// 다양한 정수형의 메모리 크기
#include <stdio.h>
int main(void)
{
	printf("    short int : %d바이트\n", sizeof(short int));		// short
	printf("          int : %d바이트\n", sizeof(int));			// int
	printf("     long int : %d바이트\n", sizeof(long int));		// long
	printf("long long int : %d바이트\n", sizeof(long long int));	// long long
	
	return 0;
}

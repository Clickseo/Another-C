// 64bits(8bytes) 정수형 : __int64
#include <stdio.h>
int main(void)
{
	// long long int	a = 9223372036854775807;
	__int64			a = 9223372036854775807;

	printf("a : %I64d \n", a);	// %I64

	return 0;
}

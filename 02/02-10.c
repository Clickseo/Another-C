#include <stdio.h>
int main(void)
{
	unsigned char	ch;
	int		i = 128;

	ch = i;					// 데이터 손실 발생(4bytes --> 1byte)

	// i  --> |0000 0000|0000 0000|0000 0000|1000 0000|
	// ch --> |1000 0000|

	// ch --> unsigned char : 8bits 모두 데이터 비트(양의 정수만 표현)
	printf("ch : %d \n", ch);		// 128
	printf(" i : %d \n", i);		// 128

	return 0;
}

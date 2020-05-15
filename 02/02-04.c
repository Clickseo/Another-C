// 문자형 상수('A')의 메모리 크기 : 4bytes -- Padding Bytes
#include <stdio.h>
int main(void)
{
	char	ch = 'A';

	printf("ch : %d \n", sizeof(ch));		// 1
	printf("A  : %d \n", sizeof('A'));		// 4

	return 0;
}

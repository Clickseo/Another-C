// 영문 소문자(a-z) 출력: ASCII 코드
#include <stdio.h>
int main(void)
{
	// 'a' == 97
	// 'b' == 98
	// ...
	// 'z' = 122

	// char		ch = 'a';
	char		ch = 97;
	for (int i = 1; ch <= 122; ch++, i++)	{
		if (i%5)	printf("%3c: %3d \t", ch, ch);
		else		printf("%3c: %3d \n", ch, ch);
	}
	printf("\n");

	return 0;
}

// 영문 소문자(a-z) 출력 : ASCII 코드 값
#include <stdio.h>
int main(void)
{
	char	ch = 97;				// char	ch = 'a';
	for(int i = 1; ch <= 122; ch++, i++)		// ( ch <= 122 ) == ( ch <= 'z' )
	{
		if(i%5)	printf("%3c : %3d \t", ch, ch);
		else	printf("%3c : %3d \n", ch, ch);
	}
	printf("\n");

	return 0;
}

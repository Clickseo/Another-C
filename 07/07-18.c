#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str1[] = "Hello World!!!";
	char	str2[] = "aeHl";
	char	str3[] = "aehl";
	int	a, b;

	a = strspn(str1, str2);
	b = strspn(str1, str3);

	printf("a : %d \n", a);		// 4
	printf("b : %d \n", b);		// 0

	return 0;
}

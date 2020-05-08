#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str1[] = "Hello World!!!";
	char	str2[] = "aeHl";
	char	str3[] = "aehl";
	int	a, b;

	a = strcspn(str1, str2);
	b = strcspn(str1, str3);

	printf("a : %d \n", a);		// 0
	printf("b : %d \n", b);		// 1

	return 0;
}

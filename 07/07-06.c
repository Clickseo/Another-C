#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str1[10] = "abcdefghi";
	char	str2[5];

	strcpy(str2, str1);

	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);

	return 0;
}

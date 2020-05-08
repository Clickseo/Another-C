#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str1[10] = {'\0'};
	char	str2[10] = "123456789";

	strncat(str1, str2, 5);

	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);

	return 0;
}

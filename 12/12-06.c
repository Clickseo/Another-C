#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str1[10] = "123456789";
	char	str2[10] = {'\0'};

	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);

	memcpy(str2, str1, 5);

	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);

	return 0;
}

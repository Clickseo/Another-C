#include<stdio.h>
int main(void)
{
	char	str[12] = "test";

	printf("puts  : ");
	puts(str);

	printf("fputs : ");
	fputs(str, stdout);

	return 0;
}

#include<stdio.h>
int main(void)
{
	char	str[10];

	gets(str);						// test
	printf("str : %s \n", str);

	fgets(str, sizeof(str)-1, stdin);		// test
	printf("str : %s \n", str);

	return 0;
}

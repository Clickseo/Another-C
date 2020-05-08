#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str[] = "Hi~ Clickseo";
	char	sub[10], *pos;

	printf("검색 할 문자열 : ");
	gets(sub);

	pos  =  strstr(str,  sub);

	if(pos != NULL)
		printf("%s에서 검색된 문자열 : %s \n", str, sub);
	else	printf("존재하지 않는 문자열!!! \n");

	return 0;
}

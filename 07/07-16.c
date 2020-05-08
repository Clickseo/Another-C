#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str[] = "Hi~ Clickseo";
	char	ch, *pos;

	printf("검색 할 문자 : ");
	ch = getchar();			// scanf("%c", &ch);

	pos  =  strchr(str, ch);

	if(pos != NULL)
		printf("%s에서 검색된 문자 : %c \n", str, *pos);
	else	printf("존재하지 않는 문자!!! \n");

	return 0;
}

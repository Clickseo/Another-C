#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str[] = "Hi~ Clickseo";
	char	sub[10], *pos;

	printf("�˻� �� ���ڿ� : ");
	gets(sub);

	pos  =  strstr(str,  sub);

	if(pos != NULL)
		printf("%s���� �˻��� ���ڿ� : %s \n", str, sub);
	else	printf("�������� �ʴ� ���ڿ�!!! \n");

	return 0;
}

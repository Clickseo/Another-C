#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str[] = "Hi~ Clickseo";
	char	ch, *pos;

	printf("�˻� �� ���� : ");
	ch = getchar();			// scanf("%c", &ch);

	pos  =  strchr(str, ch);

	if(pos != NULL)
		printf("%s���� �˻��� ���� : %c \n", str, *pos);
	else	printf("�������� �ʴ� ����!!! \n");

	return 0;
}

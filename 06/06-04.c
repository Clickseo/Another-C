#include <stdio.h>
int main(void)
{
	char	str[1024];

	printf("���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);

	fputs("���ڿ� ��� : ", stdout);
	fputs(str, stdout);

	return 0;
}

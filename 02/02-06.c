#include <stdio.h>
int main(void)
{
	char	ch = 'A';

	// ���� ch�� ���� �빮���� ��� �ҹ��ڷ� �����Ͽ� ���
	if('A' <= ch && ch <= 'Z')
		printf("���� �ҹ��� : %c \n", ch + 32);

	// ���� ch�� ���� �ҹ����� ��� �빮�ڷ� �����Ͽ� ���
	else if('a' <= ch && ch <= 'z')
		printf("���� �빮�� : %c \n", ch - 32);
	else
		printf("�� �� �� �� : %c \n", ch);

	return 0;
}

#include <stdio.h>
#define MAX_SIZE 1024
void	OUTPUT_rev(char *);
int main(void)
{
	char	str[MAX_SIZE];

	printf("���ڿ� �Է�: ");	gets(str);
	printf("���� ���: ");	OUTPUT_rev(str);

	return 0;
}

void	OUTPUT_rev(char *pStr)
{
	char	*p = pStr;

	// �� ������ ��ġ(�ּ�) Ž��
	while(*p != '\0')		// while(*p)
		p++;

	// �� ���ڸ� ������ ������ ���ں��� ���� ���
	for(p--; p >= pStr; p--)
		putchar(*p);
	putchar('\n');

	return;
}

#include <stdio.h>
#define MAX_SIZE 1024
int main(void)
{
	char	str[MAX_SIZE] = "Hello World!!!!";

	int	count = 0;
	char	*p;

	// �������� ���� p�� �迭�� ���� ù ��° ������ ���� �ּҸ� ����
	p = str;			// p = &str[0];

	// ���ڿ��� �� ���� �ǹ��ϴ� �� ���ڰ� �ƴϸ�...
	// ���� ������ �ϳ��� ���� ��Ų��.
	while(*p != '\0')		// while(*p)
	{
		count++;
		p++;
	}

	printf("���ڿ��� ���� : %d \n", count);	// 15

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1024
int main(void)
{
	int	num;
	char	str[MAX_SIZE];

	printf("������ ���� �Է�: ");
	scanf("%d", &num);

	itoa(num, str, 2);

	printf(" 2���� ��ȯ ���ڿ�: %s \n", str);

	return 0;
}

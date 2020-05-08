#include <stdio.h>
#define MAX_SIZE 1024
int	my_strcmp(const char *, const char *);
int main(void)
{
	int		res;
	char	str1[MAX_SIZE];
	char	str2[MAX_SIZE];

	printf("���ڿ� str1 : ");	gets(str1);
	printf("���ڿ� str2 : ");	gets(str2);

	res = my_strcmp(str1, str2);

	printf("res : %d \n", res);

	return 0;
}

int	my_strcmp(const char *pStr1, const char *pStr2)
{
	// �־��� �� ���ڿ��� �Ȱ��� ���� ���Ѵ�.
	for(; *pStr1 == *pStr2; pStr1++, pStr2++)
	{
		// �־��� �� ���ڿ��� �� ���ڱ��� ��Ȯ�� ��ġ�ϴ� ���
		if(*pStr1 == '\0')		// if(*pStr1)
			return 0;
	}

	// ó������ �ٸ� ���ڸ� ������ �񱳸� ���Ͽ� ��ȯ�� ����
	if(*pStr1 > *pStr2)
		return 1;

	return -1;
}

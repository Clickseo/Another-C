#include <stdio.h>
#define MAX_SIZE 1024
size_t	 my_strlen(const char *);
int main(void)
{
	int	count;
	char	str[MAX_SIZE] = "Hello World!!!!";

	count = my_strlen(str);

	printf("���ڿ��� ���� : %d \n", count);	// 15

	return 0;
}

size_t	my_strlen(const char *pStr)
{
	const char *p = pStr;

	// ���� ó�� : �� ������ ���� �Է� ���� ���...
	if(pStr == NULL)
		return 0;

	while(*p != '\0')		// while(*p)
		p++;

	return p - pStr;
}

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1024
int main(void)
{
	char	str[MAX_SIZE] = "Hello World!!!!";
	int	count = 0;

	count = strlen(str);

	printf("���ڿ��� ���� : %d \n", count);	// 15

	return 0;
}

#include <stdio.h>
int main(void)
{
	char	*p = "Hello World!!!";

	// ���ڿ��� ���� �ǹ��ϴ� �� ���ڰ� �ƴ� ����...
	while(*p != '\0')
		printf("%c", *p++);
	printf("\n");

	return 0;
}

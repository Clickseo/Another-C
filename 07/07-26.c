#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double	res;
	char	str[12];

	printf("���ڿ� �Է� : ");
	gets(str);

	res = atof(str);

	printf("%s�� ��ȯ�� ��� : %f \n", str, res);

	return 0;
}

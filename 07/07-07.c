#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str1[10] = "abcdefghi";
	char	str2[5];

	strncpy(str2, str1, sizeof(str2)-1);

	// �� �������� �� ���ڸ� �߰�
	str2[sizeof(str2)-1] = '\0';

	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);

	return 0;
}

#include <stdio.h>
int main(void)
{
	char	str[1024];

	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));		// scanf("%s", str);

	printf("문자열 출력 : %s \n", str);

	return 0;
}

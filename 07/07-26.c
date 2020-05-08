#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double	res;
	char	str[12];

	printf("문자열 입력 : ");
	gets(str);

	res = atof(str);

	printf("%s의 변환된 결과 : %f \n", str, res);

	return 0;
}

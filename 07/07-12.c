[예제] 7-12 문자열 비교 함수를 이용한 간단한 인증 처리
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	id[12] = "test";

	if(strcmp(id, "test") == 0)
		printf("인증 성공!!! \n");
	else
		printf("인증 실패!!! \n");

	return 0;
}

#include <stdio.h>
#include <string.h>

char	*ID = "Clickseo";		// 사용자 아이디
char	*PASS = "1234";		// 사용자 비밀번호

int main(void)
{
	char	user_id[12];
	char	user_pass[12];

	printf("아이디 : ");
	gets(user_id);

	// 아이디 일치 여부 판단
	if(!strcmp(ID, user_id))
	{
		printf("비밀번호 : ");
		gets(user_pass);

		// 비밀번호 일치 여부 판단
		if(!strcmp(PASS, user_pass))
			printf("%s님 환영합니다!!! \n", ID);
		else	
			printf("잘못된 비밀번호!!! \n");
	}
	else
		printf("잘못된 아이디!!! \n");

	return 0;
}

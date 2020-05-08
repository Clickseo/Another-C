#include <stdio.h>
int main(void)
{
	char	stu_ID[15];		// 학번
	char	name[12];		// 이름
	char	gender[5];		// 성별
	char	tel[15];		// 연락처
	char	addr[50];		// 주소

	printf("학  번 : ");				gets(stu_ID);
	printf("이  름 : ");				gets(name);
	printf("성  별 (예: 남자) : ");		gets(gender);
	printf("연락처 (예: 010-1234-5678) : ");	gets(tel);
	printf("주  소 : ");				gets(addr);

	printf("\n ### 입력 정보 ### \n\n");
	printf("학   번 : ");				puts(stu_ID);
	printf("이   름 : ");				puts(name);
	printf("성   별 : ");				puts(gender);
	printf("연락처 : ");				puts(tel); 
	printf("주   소 : ");				puts(addr);

	return 0;
}

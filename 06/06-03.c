#include <stdio.h>
int main(void)
{
	char	stu_ID[16];	// 학번
	char	name[12];	// 이름
	char	gender[8];	// 성별
	char	tel[16];	// 연락처
	char	addr[52];	// 주소

	// 학생 정보 입력
	printf("학  번 : ");	gets_s(stu_ID, sizeof(stu_ID));
	printf("이  름 : ");	gets_s(name, sizeof(name));

	printf("성  별 (예: 남자) : ");
	gets_s(gender, sizeof(gender));

	printf("연락처 (예: 010-1234-5678) : ");
	gets_s(tel, sizeof(gender));

	printf("주  소 : ");
	gets_s(addr, sizeof(gender));

	// 학생 정보 출력
	printf("\n ### 입력 정보 ### \n\n");
	printf("학   번 : ");	puts(stu_ID);
	printf("이   름 : ");	puts(name);
	printf("성   별 : ");	puts(gender);
	printf("연락처 : ");	puts(tel);
	printf("주   소 : ");	puts(addr);

	return 0;
}

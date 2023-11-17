// 중첩 구조체(Nested Struct)
#include <stdio.h>

// 구조체 형식 정의: 날짜(DATE)
typedef struct _date {
	int	year;
	int	month;
	int	day;
} DATE;

// 구조체 형식 정의: 정보(INFO)
typedef struct _info {
	char	name[12];	// 이름
	DATE	birthDate;	// 생년월일
	DATE	joinDate;	// 입사일
	DATE	resignDate;	// 퇴사일
} INFO;

int main(void)
{
	// 구조체 변수 선언
	INFO	temp;

	printf("이    름: ");
	gets_s(temp.name, sizeof(temp.name));		// gets(temp.name);

	printf("생년월일: ");
	scanf_s("%d %d %d", &temp.birthDate.year, &temp.birthDate.month, &temp.birthDate.day);
	// scanf("%d %d %d", &temp.birthDate.year, &temp.birthDate.month, &temp.birthDate.day);

	printf("입사일: ");
	scanf_s("%d %d %d", &temp.joinDate.year, &temp.joinDate.month, &temp.joinDate.day);
	// scanf("%d %d %d", &temp.joinDate.year, &temp.joinDate.month, &temp.joinDate.day);

	printf("퇴사일: ");
	scanf_s("%d %d %d", &temp.resignDate.year, &temp.resignDate.month, &temp.resignDate.day);
	// scanf("%d %d %d", &temp.resignDate.year, &temp.resignDate.month, &temp.resignDate.day);

	printf("\n %10s님의 정보 출력\n", temp.name);
	printf("생년월일: %d %d %d\n", temp.birthDate.year, temp.birthDate.month, temp.birthDate.day);
	printf("입사날짜: %d %d %d\n", temp.joinDate.year, temp.joinDate.month, temp.joinDate.day);
	printf("퇴사날짜: %d %d %d\n", temp.resignDate.year, temp.resignDate.month, temp.resignDate.day);

	return 0;
}

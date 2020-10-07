// 구조체의 이해: 중첩 구조체
#include <stdio.h>

// 형식(재) 정의된 구조체: DATE
typedef struct _date {
	int		year;
	int		month;
	int		day;
}DATE;

// 형식(재) 정의된 구조체: INFO
typedef struct _info {
	char	name[12];
	DATE	birth_date;	// 생년월일
	DATE	join_date;	// 입사일
	DATE	resign_date;	// 퇴사일
}INFO;

int main(void)
{
	INFO	temp;

	printf("이    름: ");
	gets_s(temp.name, sizeof(temp.name));		// gets(temp.name);

	printf("생년월일: ");
	// scanf("%d %d %d", &temp.birth_date.year, &temp.birth_date.month, &temp.birth_date.day);
	scanf_s("%d %d %d", &temp.birth_date.year, &temp.birth_date.month, &temp.birth_date.day);

	printf("입사날짜: ");
	// scanf("%d %d %d", &temp.join_date.year,	&temp.join_date.month, &temp.join_date.day);
	scanf_s("%d %d %d", &temp.join_date.year, &temp.join_date.month, &temp.join_date.day);

	printf("퇴사날짜: ");
	// scanf("%d %d %d", &temp.resign_date.year, &temp.resign_date.month, &temp.resign_date.day);
	scanf_s("%d %d %d", &temp.resign_date.year, &temp.resign_date.month, &temp.resign_date.day);

	printf("\n %10s님의 정보 출력\n", temp.name);
	printf("생년월일: %d %d %d\n", temp.birth_date.year, temp.birth_date.month, temp.birth_date.day);
	printf("입사날짜: %d %d %d\n", temp.join_date.year,	temp.join_date.month, temp.join_date.day);
	printf("퇴사날짜: %d %d %d\n", temp.resign_date.year, temp.resign_date.month, temp.resign_date.day);

	return 0;
}

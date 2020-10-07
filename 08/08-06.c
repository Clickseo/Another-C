// 구조체 선언 및 정의: 구조체 비트 필드
#include <stdio.h>

typedef struct _new_date {
	unsigned int	year: 16;
	unsigned int	month: 4;
	unsigned int	day: 5;
}new_DATE;

int main(void)
{
	// 년월일 입력을 위한 임시 변수
	int		year, month, day;
	new_DATE	a;

	// 구조체 비트 필드에는 주소 연산자(&) 사용 불가
	// scanf_s("%d", &a.year);	// Error
	printf("년: ");
	scanf_s("%d", &year);		// scanf("%d", &year);
	a.year = year;

	// scanf_s("%d", &a.month);	// Error
	printf("월: ");
	scanf_s("%d", &month);		// scanf("%d", &month);
	a.month = month;

	// scanf_s("%d", &a.day);	// Error
	printf("일: ");
	scanf_s("%d", &day);		// scanf("%d", &day);
	a.day = day;

	printf("년월일: %d-%d-%d \n", a.year, a.month, a.day);

	return 0;
}

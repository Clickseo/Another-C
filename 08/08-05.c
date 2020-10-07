#include <stdio.h>

// DATE 형식의 크기: 12bytes
typedef struct _date {
	unsigned int	year;
	unsigned int	month;
	unsigned int	day;
} DATE;

// 구조체 비트 필드
// new_DATE 형식의 크기: 4bytes
typedef struct _new_date {
	unsigned int	year: 16;	// 16bits
	unsigned int	month: 4;	//  4bits
	unsigned int	day: 5;		//  5bits
} new_DATE;

int main(void)
{
	new_DATE	a;

	printf("    DATE 형식의 크기: %d \n", sizeof(DATE));
	printf("new_DATE 형식의 크기: %d \n", sizeof(new_DATE));

	a.year = 2020;
	a.month = 12;
	a.day = 31;

	printf("날짜: %d-%d-%d \n", a.year, a.month, a.day);

	return 0;
}

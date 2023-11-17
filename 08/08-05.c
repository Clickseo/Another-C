// 비트 필드 구조체(Bit Field Structure)
// 멤버들의 크기가 비트 단위로 나누어져 있는 구조체

#include <stdio.h>

// DATE 형식의 크기: 12bytes
typedef struct _date {
	unsigned int	year;
	unsigned int	month;
	unsigned int	day;
} DATE;

// 비트 필드 구조체 형식 정의
// new_DATE 형식의 크기: 4bytes
typedef struct bitFieldDATE {
	unsigned int	year: 16;	// 0 ~ 9999	// 16 bits
	unsigned int	month: 4;	// 1 ~ 12	//  4 bits
	unsigned int	day: 5;		// 1 ~ 31	//  5 bits
	unsigned char : 7;		// Reserved	// Padding Bits
} bitFieldDATE;

int main(void)
{
	bitFieldDATE	temp;

	printf("        DATE 형식의 크기: %d \n", sizeof(DATE));		// 12 bits
	printf("bitFieldDATE 형식의 크기: %d \n", sizeof(bitFieldDATE));	//  4 bits

	temp.year = 2000;
	temp.month = 12;
	temp.day = 31;
	printf("오늘은 %d년 %d월 %d일 입니다.\n", temp.year, temp.month, temp.day );

	temp.day = 32;		// temp.day = 0;
	printf("오늘은 %d년 %d월 %d일 입니다.\n", temp.year, temp.month, temp.day );

	return 0;
}

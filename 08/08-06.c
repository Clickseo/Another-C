// 비트 필드 구조체(Bit Field Structure)
#include <stdio.h>

// 비트 필드 구조체 형식 정의
typedef struct _new_date {
	unsigned int	year : 16;	// 0 ~ 9999	// 16 bits
	unsigned int	month : 4;	// 1 ~ 12	//  4 bits
	unsigned int	day : 5;	// 1 ~ 31	//  5 bits
	unsigned char : 7;		// Reserved	// Padding Bits
} bitFieldDATE;

int main(void)
{
	// 비트 필드 구조체 선언
	bitFieldDATE	temp;

	// 날짜(년월일) 입력을 위한 임시 변수
	int	year, month, day;
	
	// 비트 필드 구조체의 멤버에는 주소 연산자(&) 사용 불가
	// scanf_s("%d", &temp.year);	// error C2104 : 비트 필드의 '&'이(가) 무시됩니다.
	printf("년: ");
	scanf_s("%d", &year);	// scanf("%d", &year);
	temp.year = year;

	printf("월: ");
	scanf_s("%d", &month);	// scanf("%d", &month);
	temp.month = month;

	printf("일: ");
	scanf_s("%d", &day);	// scanf("%d", &day);
	temp.day = day;

	printf("오늘은 %d년 %d월 %d일 입니다.\n", temp.year, temp.month, temp.day );

	return 0;
}

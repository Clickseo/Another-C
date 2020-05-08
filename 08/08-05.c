#include <stdio.h>

// 구조체 비트 필드를 이용한 구조체의 형식 정의
typedef struct _new_date 
{
	unsigned int	year : 15;
	unsigned int	month : 4;
	unsigned int	day : 5;
}new_DATE;

int main(void)
{
	// 구조체형 변수 선언
	new_DATE	a;

	// 구조체 비트 필드로 설계된 멤버에 데이터 저장
	a.year = 2011;
	a.month = 12;
	a.day = 31;

	printf("날짜 : %d-%d-%d \n", a.year, a.month, a.day); 

	return 0;
}

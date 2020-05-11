#include <stdio.h>
int main(void)
{
	// 년월일을 저장할 변수 선언
	int	year;
	int	month;
	int	day;

	// 사용자로부터 년월일을 입력 처리
	printf("년 : ");
	scanf_s("%d", &year);		// scanf("%d", &year);
	
	printf("월 : ");
	scanf_s("%d", &month);		// scanf("%d", &month);
	
	printf("일 : ");
	scanf_s("%d", &day);		// scanf("%d", &day);

	// 입력 받은 연월일을 출력
	printf("오늘의 날짜 : %d-%d-%d \n", year, month, day);

	return 0;
}

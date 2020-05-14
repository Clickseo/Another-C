#include <stdio.h>
int main(void)
{
	// 변수 선언 : 년월일을 저장할 메모리 공간
	// int	year, month, day;
	int	year;
	int	month;
	int	day;

	// 사용자 입력 : 년월일
	printf("년 : ");
	scanf_s("%d", &year);		// scanf("%d", &year);
	
	printf("월 : ");
	scanf_s("%d", &month);		// scanf("%d", &month);
	
	printf("일 : ");
	scanf_s("%d", &day);		// scanf("%d", &day);

	// 결과 출력 : 입력 받은 년월일 출력
	printf("오늘의 날짜 : %d-%d-%d \n", year, month, day);

	return 0;
}

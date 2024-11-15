#include <stdio.h>
int main(void)
{
	// 변수 선언: 데이터(년월일)를 저장할 메모리 공간 확보!!!
	// int	year, month, day;
	int	year;
	int	month;
	int	day;

	// 사용자로 데이터(년월일)을 입력 받아 메모리에 저장
	printf("년: ");
	scanf_s("%d", &year);
	// scanf("%d", &year);

	printf("월: ");
	scanf_s("%d", &month);
	// scanf("%d", &month);

	printf("일: ");
	scanf_s("%d", &day);
	// scanf("%d", &day);

	// 메모리의 데이터(년월일)를 화면에 출력
	printf("오늘의 날짜: %d-%d-%d \n", year, month, day);

	return 0;
}

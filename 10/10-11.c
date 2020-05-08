#include <stdio.h>
#include <stdlib.h>

int	MENU(void)
{
	int	num;

	system("cls");

	printf("\n### 성적 관리 프로그램 ### \n\n");
	printf("1) 성적 입력\n");
	printf("2) 성적 출력\n");
	printf("3) 프로그램 종료!!!\n\n");

	printf("메뉴 선택 : [   ]\b\b\b");
	scanf("%d", &num);
	fflush(stdin);

	return num;
}

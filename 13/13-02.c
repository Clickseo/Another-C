#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

int main(void)
{
	int	num;
	NODE	*head = NULL;

	while(TRUE)
	{
		system("cls");

		printf("\n### 단순 연결 리스트 ### \n\n");
		printf("1) 데이터 입력 \n");
		printf("2) 데이터 출력 \n");
		printf("3) 프로그램 종료!!! \n\n");

		printf("메뉴 선택 : ");
		scanf("%d", &num);
		fflush(stdin);

		switch(num)
		{
			case 1: head = INPUT(head);		break;
			case 2: OUTPUT(head);		break;
			case 3: printf("프로그램 종료!!! \n");
					return 0;
			default: printf("잘못된 선택!!! \n");
		}

		system("pause");
	}

	return 0;
}

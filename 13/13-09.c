#include <stdio.h>
#include <stdlib.h>
#include "Dnode.h"

int main(void)
{
	int	num;
	DNODE	*head = NULL;

	while(TRUE)
	{
		system("cls");

		printf("\n ### 이중 연결 리스트 ### \n\n");
		printf("1) 데이터 입력 \n");
		printf("2) 데이터 출력 \n");
		printf("3) 데이터 출력 : 역순 \n");
		printf("4) 프로그램 종료 \n\n");

		printf("메뉴 선택 : ");
		scanf("%d", &num);
		fflush(stdin);

		switch(num)
		{
			case 1:	head = INPUT(head);		break;
			case 2:	OUTPUT(head);		break;
			case 3:	OUTPUT_rev(head);		break;
			case 4:	printf("프로그램 종료!!! \n");
					return 0;
			default: printf("잘못된 선택!!! \n");
		}

		system("pause");
	}

	return 0;
}

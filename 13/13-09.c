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

		printf("\n ### ���� ���� ����Ʈ ### \n\n");
		printf("1) ������ �Է� \n");
		printf("2) ������ ��� \n");
		printf("3) ������ ��� : ���� \n");
		printf("4) ���α׷� ���� \n\n");

		printf("�޴� ���� : ");
		scanf("%d", &num);
		fflush(stdin);

		switch(num)
		{
			case 1:	head = INPUT(head);		break;
			case 2:	OUTPUT(head);		break;
			case 3:	OUTPUT_rev(head);		break;
			case 4:	printf("���α׷� ����!!! \n");
					return 0;
			default: printf("�߸��� ����!!! \n");
		}

		system("pause");
	}

	return 0;
}

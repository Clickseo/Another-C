#include <stdio.h>
#include <stdlib.h>

int	MENU(void)
{
	int	num;

	system("cls");

	printf("\n### ���� ���� ���α׷� ### \n\n");
	printf("1) ���� �Է�\n");
	printf("2) ���� ���\n");
	printf("3) ���α׷� ����!!!\n\n");

	printf("�޴� ���� : [   ]\b\b\b");
	scanf("%d", &num);
	fflush(stdin);

	return num;
}

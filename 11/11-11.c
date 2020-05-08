#include <stdio.h>

int ADD(int, int);
int SUB(int, int);
int MUL(int, int);
int DIV(int, int);

int main(void)
{
	int	a = 10, b = 20, num;
	int	(*arr[4])(int, int) = {ADD, SUB, MUL, DIV};

	printf("### ��Ģ ���� ### \n\n");
	printf("1) ��  �� ���� \n");
	printf("2) ��  �� ���� \n");
	printf("3) ��  �� ���� \n");
	printf("4) ������ ���� \n\n");
	printf("������ ���� ���� : ");
	scanf("%d", &num);

	// 1 ~ 4 �̿��� �޴� ���� �� ���� ó��
	if(num < 1 || num > 4)
	{
		printf("�߸��� �޴� ����!!! \n");
		return 0;
	}
	// �޴� ���ÿ� ���� �Լ� ȣ��
	printf("���� ��� : %d \n", arr[num-1](10, 20));

	return 0;
}

int ADD(int a, int b)	{	return a + b;	}
int SUB(int a, int b)	{	return a - b;	}
int MUL(int a, int b)	{	return a * b;	}
int DIV(int a, int b)	{	return a / b;	}

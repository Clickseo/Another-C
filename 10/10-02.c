#include <stdio.h>
int main(void)
{
	// FILE ����ü ������ �������� ���� ����
	FILE	*fp = NULL;

	// fopen( ) �Լ��� �̿��Ͽ� "a.txt" ������ ���� ���� ����
	fp = fopen("a.txt", "w");

	// ���� ���� ���� �� ���� ó�� �κ�
	if(fp == NULL)
	{
		printf("���� ���� ����!!! \n");
		exit(100);
	}

	(���� ���α׷� ����)

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char	ch;

	// a.txt�� �б� ���� ����
	FILE	*fp = fopen("a.txt", "r");
	if(fp == NULL)	// ���� ���� ���� �� ���� ó��
	{
		printf("���� ���� ����!!! \n");
		exit(100);
	}

	// ���� ���ۿ��� �� ���� �б�
	ch = fgetc(fp);

	// ǥ�� ��� ���ۿ� �� ���� ����
	putchar(ch);

	fclose(fp);

	return 0;
}

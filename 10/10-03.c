#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char	ch;

	// a.txt ������ ���� ���� ����
	FILE	*fp = fopen("a.txt", "w");
	if(fp == NULL)	// ���� ���� ���� �� ���� ó��
	{
		printf("���� ���� ����!!! \n");
		exit(100);
	}

	// ǥ�� �Է� ���ۿ��� �� ���� �б�
	ch = getchar();

	// ������ ���� ���ۿ� �� ���� ����
	fputc(ch, fp);

	fclose(fp);

	return 0;
}

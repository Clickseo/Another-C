#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	ch;
	FILE	*fp = NULL;

	// test.txt ������ �б� ���� ����
	fp = fopen("test.txt", "r");
	if(fp == NULL)
	{
		// test.txt ���� ���� ���� �� ���� �޽��� ���
		perror("test.txt ���� ���� ����");
		exit(100);
	}

	// test.txt ������ ��� ������ ǥ�� ���(�����)
	while((ch = fgetc(fp)) != EOF)
		putchar(ch);

	// �б� ���� �־��� ���� ��Ʈ���� ������ �߻��ߴ��� ���� �Ǵ�
	if(ferror(fp))
		puts("�б� ���� �����(I/O) ���� �߻�!!!");

	// ���������� ������ ���� ���� �ߴ��� ���� �Ǵ�
	if(feof(fp))
		puts("���������� ������ ���� ����!!!");

	return 0;
}

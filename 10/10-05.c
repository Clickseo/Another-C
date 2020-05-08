#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char	ch;
	FILE	*fpIn, *fpOut;

	// test.txt ������ �б� ���� ����
	fpIn = fopen("test.txt", "r");
	if(fpIn == NULL)
	{
		printf("test.txt ���� ���� ����!!! \n");
		exit(100);
	}

	// copy.txt ������ ���� ���� ����
	fpOut = fopen("copy.txt", "w");
	if(fpOut == NULL)
	{
		printf("copy.txt ���� ���� ����!!! \n");
		exit(200);
	}

	// ������ ���� ���� �� ����...
	// test.txt���Ͽ��� �� ���ڸ� �о� copy.txt ���Ͽ� ����
	while((ch = fgetc(fpIn)) != EOF)
		fputc(ch, fpOut);

	fclose(fpIn);
	fclose(fpOut);

	return 0;
}

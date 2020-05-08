#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1024
int main(void)
{
	char	str[MAX_SIZE];
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
		exit(100);
	}

	// ������ ���� ���� �� ����...
	// test.txt���Ͽ��� �� ���ڿ��� �о� copy.txt ���Ͽ� ����
	while(fgets(str, sizeof(str), fpIn) != NULL)
		fputs(str, fpOut);

	fclose(fpIn);
	fclose(fpOut);

	return 0;
}

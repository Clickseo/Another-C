#include <stdio.h>
#include <stdlib.h>

int  main(int argc, char *argv[])
{
	int	ch;
	FILE	*fpIn, *fpOut;

	// �߸��� ���α׷� ��뿡 ���� ���� ó��
	if(argc < 3)
	{
		printf("���� : my_copy  �������ϸ�  �������ϸ� \n\n");
		exit(10);
	}

	printf("���� ������... \n\n");
	if(!(fpIn = fopen(argv[1], "r")))
	{
		printf("%s ���� ���� ����!!! \n", argv[1]);
		exit(100);
	}

	if(!(fpOut = fopen(argv[2], "w")))
	{
		printf("%s ���� ���� ����!!! \n", argv[2]);
		exit(200);
	}

	// ���� ����(argv[1])�� ��� ���ڸ� ��� ����(argv[2])�� ����
	while((ch = fgetc(fpIn)) != EOF)
		fputc(ch, fpOut);

	fclose(fpIn); 
	fclose(fpOut);

	printf("���� �Ϸ�!!! \n");

	return 0;
}

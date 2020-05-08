#include <stdio.h>
#include <stdlib.h>
#include "score.h"

// ������ ���� ������ �ܺ� ������ ����
extern const char	*file;

void OUTPUT(void)
{
	SCORE	temp;
	FILE	*fp = NULL;

	// data.txt ������ �б� ���� ����
	fp  =  fopen(file,  "rb");
	if(fp == NULL)
	{
		printf("���� ���� ����!!! \n");
		exit(200);
	}

	// SCORE ��� ũ�⸸ŭ data.txt ���� ���ۿ� 1ȸ �о� ��
	while(fread(&temp, sizeof(SCORE), 1, fp))
		printf("%10s %3d %3d %3d %5d %8.2f\n",
			temp.name, temp.kor, temp.eng, temp.math,
			temp.tot, temp.ave);

	fclose(fp);

	return;
}

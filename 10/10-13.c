#include <stdio.h>
#include <stdlib.h>
#include "score.h"

// ������ ���� ������ �ܺ� ������ ����
extern const char	*file;

void INPUT(void)
{
	SCORE	temp;
	FILE	*fp = NULL;

	// data.txt ������ ���� ���� ����
	fp  =  fopen(file, "ab");
	if(fp == NULL)
	{
		printf("%s ���� ���� ����!!! \n", file);
		exit(100);
	}

	printf("�̸�: ");	gets(temp.name);
	printf("����: ");	scanf("%d", &temp.kor);
	printf("����: ");	scanf("%d", &temp.eng);
	printf("����: ");	scanf("%d%*c", &temp.math);

	temp.tot = temp.kor + temp.eng + temp.math;
	temp.ave = (float)temp.tot / 3;

	// SCORE ��� ũ�⸸ŭ data.txt ���� ���ۿ� ���
	fwrite(&temp,  sizeof(SCORE),  1,  fp);

	fclose(fp);

	return;
}

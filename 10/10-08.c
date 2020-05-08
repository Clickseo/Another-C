#include <stdio.h>
#include <stdlib.h>

typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	SCORE	temp;
	FILE	*fp = NULL;

	// score.txt ������ �б�� ���Ⱑ ��� �����ϵ��� ����
	fp = fopen("score.txt", "wb+");
	if(fp == NULL)
	{
		printf("score.txt ���� ���� ����!!!\n");
		exit(100);
	}

	// �� �л��� ���� �̸��� ������ �Է� ó��
	printf("�̸�: ");	gets(temp.name);
	printf("����: ");	scanf("%d", &temp.kor);
	printf("����: ");	scanf("%d", &temp.eng);
	printf("����: ");	scanf("%d", &temp.math);

	// ������ ��� ���
	temp.tot = temp.kor + temp.eng + temp.math;
	temp.ave = (float)(temp.kor + temp.eng + temp.math) / 3;

	// �Է� ���� ������ SCORE ũ���� ��ϸ�ŭ ���Ͽ� ����
	fwrite(&temp, sizeof(SCORE), 1, fp);

	// score.txt ������ ù ��° �κ����� ���� �����͸� �̵�
	rewind(fp);

	// score.txt ������ ù ��° �κк��� SCORE ũ���� ��ϸ�ŭ �о��
	fread(&temp, sizeof(SCORE), 1, fp);

	printf("\n ### �Էµ� ���� ### \n\n");
	printf("�̸�: %s \n", temp.name);
	printf("����: %d \n", temp.kor);
	printf("����: %d \n", temp.eng);
	printf("����: %d \n", temp.math);
	printf("����: %d \n", temp.tot);
	printf("��� : %.1f \n", temp.ave);

	fclose(fp);

	return 0;
}

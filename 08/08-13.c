#include <stdio.h>

typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

void OUTPUT(SCORE);

int main(void)
{
	SCORE	a;

	printf("�̸�: ");	gets(a.name);
	printf("����: ");	scanf("%d", &a.kor);
	printf("����: ");	scanf("%d", &a.eng);
	printf("����: ");	scanf("%d", &a.math);

	a.tot = a.kor + a.eng + a.math;
	a.ave = (float)(a.kor + a.eng + a.math)/3;

	OUTPUT(a);

	return 0;
}

void OUTPUT(SCORE temp)
{
	printf("\n %10s �л��� ���� ��� \n", temp.name);
	printf("����: %3d, ����: %3d, ����:  %3d \n", 
				temp.kor, temp.eng, temp.math);

	printf("����: %3d, ���: %8.2lf \n", temp.tot, temp.ave);

	return;
}

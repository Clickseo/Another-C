#include <stdio.h>

typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

void OUTPUT(char *name, int kor, int eng, int math, 
						int tot, float ave);

int main(void)
{
	SCORE	a;

	printf("�̸� : ");	gets(a.name);
	printf("���� : ");	scanf("%d", &a.kor);
	printf("���� : ");	scanf("%d", &a.eng);
	printf("���� : ");	scanf("%d", &a.math);

	a.tot = a.kor + a.eng + a.math;
	a.ave = (float)(a.kor + a.eng + a.math)/3;

	OUTPUT(a.name, a.kor, a.eng, a.math, a.tot, a.ave);

	return 0;
}

void OUTPUT(char *name, int kor, int eng, int math, 
						int tot, float ave)
{
	printf("\n %10s �л��� ���� ��� \n", name);
	printf("����: %3d, ����: %3d, ����:  %3d\n", kor, eng, math);

	printf("���� : %3d, ��� : %8.2lf \n", tot, ave);

	return;
}

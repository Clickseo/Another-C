#include <stdio.h>

typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

void OUTPUT(SCORE *);

int main(void)
{
	SCORE	a;

	printf("�̸� : ");	gets(a.name);
	printf("���� : ");	scanf("%d", &a.kor);
	printf("���� : ");	scanf("%d", &a.eng);
	printf("���� : ");	scanf("%d", &a.math);

	a.tot = a.kor + a.eng + a.math;
	a.ave = (float)(a.kor + a.eng + a.math)/3;

	OUTPUT(&a);

	return 0;
}

void OUTPUT(SCORE *p)
{
	printf("\n %10s �л��� ���� ��� \n", p->name);
	printf("���� : %3d, ���� : %3d, ���� :  %3d \n", 
					p->kor, p->eng, p->math);

	printf("���� : %3d, ��� : %8.2lf \n", p->tot, p->ave);

	return;
}

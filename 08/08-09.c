#include <stdio.h>

typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	SCORE	a;
	SCORE	*p = &a;

	printf("�̸� : ");	gets((*p).name);
	printf("���� : ");	scanf("%d", &(*p).kor);
	printf("���� : ");	scanf("%d", &(*p).eng);
	printf("���� : ");	scanf("%d", &(*p).math);

	(*p).tot = (*p).kor + (*p).eng + (*p).math;
	(*p).ave = (float)((*p).kor + (*p).eng + (*p).math)/3;

	printf("\n %10s �л��� ���� ��� \n", (*p).name);
	printf("���� : %3d, ���� : %3d, ���� :  %3d \n", 
				(*p).kor, (*p).eng, (*p).math);

	printf("���� : %3d, ��� : %8.2lf \n", (*p).tot, (*p).ave);

	return 0;
}

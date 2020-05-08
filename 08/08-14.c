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

	printf("이름 : ");	gets(a.name);
	printf("국어 : ");	scanf("%d", &a.kor);
	printf("영어 : ");	scanf("%d", &a.eng);
	printf("수학 : ");	scanf("%d", &a.math);

	a.tot = a.kor + a.eng + a.math;
	a.ave = (float)(a.kor + a.eng + a.math)/3;

	OUTPUT(&a);

	return 0;
}

void OUTPUT(SCORE *p)
{
	printf("\n %10s 학생의 성적 결과 \n", p->name);
	printf("국어 : %3d, 영어 : %3d, 수학 :  %3d \n", 
					p->kor, p->eng, p->math);

	printf("총점 : %3d, 평균 : %8.2lf \n", p->tot, p->ave);

	return;
}

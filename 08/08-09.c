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

	printf("이름 : ");	gets((*p).name);
	printf("국어 : ");	scanf("%d", &(*p).kor);
	printf("영어 : ");	scanf("%d", &(*p).eng);
	printf("수학 : ");	scanf("%d", &(*p).math);

	(*p).tot = (*p).kor + (*p).eng + (*p).math;
	(*p).ave = (float)((*p).kor + (*p).eng + (*p).math)/3;

	printf("\n %10s 학생의 성적 결과 \n", (*p).name);
	printf("국어 : %3d, 영어 : %3d, 수학 :  %3d \n", 
				(*p).kor, (*p).eng, (*p).math);

	printf("총점 : %3d, 평균 : %8.2lf \n", (*p).tot, (*p).ave);

	return 0;
}

#include <stdio.h>
#define MAX_SIZE 3
typedef  struct  _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
} SCORE;

void	INPUT(SCORE  *);
void	OUTPUT(SCORE  *);

int main(void)
{
	SCORE	arr[MAX_SIZE];

	INPUT(arr);
	OUTPUT(arr);

	return 0;
}

void  INPUT(SCORE  *p)
{
	int	i;

	for(i=0; i<MAX_SIZE; i++, p++)
	{
		printf("\n %d 번째 학생 성적 입력... \n", i+1);
		printf("학생 이름 : ");	gets(p->name);
		printf("국어 점수 : ");	scanf("%d", &p->kor);
		printf("영어 점수 : ");	scanf("%d", &p->eng);
		printf("수학 점수 : ");	scanf("%d%", &p->math);
		fflush(stdin);

		p->tot = p->kor + p->eng + p->math;
		p->ave = (float)p->tot / 3;
	}

	return;
}

void  OUTPUT(SCORE  *p)
{
	int	i;

	printf("\n \t ### 학생 성적 ### \n");
	for(i=0; i<MAX_SIZE; i++, p++)
		printf("%10s %3d %3d %3d %5d %8.2f \n",	
		p->name, p->kor, p->eng, p->math, p->tot, p->ave);

	return;
}

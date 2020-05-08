#include <stdio.h>
#define MAX_SIZE 3
typedef  struct  _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
} SCORE;

void  OUTPUT(SCORE  *p)
{
	int	i;

	printf("\n \t ### 학생 성적 ### \n");
	for(i=0; i<MAX_SIZE; i++, p++)
		printf("%10s %3d %3d %3d %5d %8.2f \n",	
		p->name, p->kor, p->eng, p->math, p->tot, p->ave);

	return;
}

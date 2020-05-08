#define MAX_SIZE 3
#ifndef _SCORE_H_
#define _SCORE_H_
typedef  struct  _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
} SCORE;
#endif

void	INPUT(SCORE  *);
void	OUTPUT(SCORE  *);

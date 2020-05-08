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

#include <stdio.h>

// 매크로 상수: 학생 수
#define stuMAXSIZE 3

typedef  struct  _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
} SCORE;

void	INPUT(SCORE *pArr, int num);
void	OUTPUT(SCORE*pArr, int num);

int main(void)
{
	SCORE	arr[stuMAXSIZE];

	INPUT(arr, stuMAXSIZE); 
	OUTPUT(arr, stuMAXSIZE);

	return 0;
}

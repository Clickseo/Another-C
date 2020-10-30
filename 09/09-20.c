// output.c
#include <stdio.h>

// 매크로 상수: 학생 수
#define arrMAXSIZE 3

typedef  struct  _score {
	char	name[12];
	int		kor, eng, math, tot;
	float	ave;
} SCORE;

void  OUTPUT(SCORE *pArr)
{
	printf("\n \t ### 학생 성적 정보 ### \n");
	for (int i = 0; i < arrMAXSIZE; i++, pArr++)
		printf("%10s %3d %3d %3d %5d %8.2f \n",
			pArr->name, pArr->kor, pArr->eng, pArr->math, pArr->tot, pArr->ave);

	return;
}

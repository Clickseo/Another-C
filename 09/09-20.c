// output.c <-- SCORE 형식 정의 매크로 상수 추가
#include <stdio.h>

// 매크로 상수: 학생 수
#define stuMAXSIZE 3

// 형식(재) 정의된 구조체: SCORE
typedef  struct  _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
} SCORE;

void  OUTPUT(SCORE *pArr)
{
	printf("\n \t ### 학생 성적 정보 ### \n");
	for (int i = 0; i < stuMAXSIZE; i++, pArr++)
		printf("%10s %3d %3d %3d %5d %8.2f \n",
			pArr->name, pArr->kor, pArr->eng, pArr->math, pArr->tot, pArr->ave);

	return;
}

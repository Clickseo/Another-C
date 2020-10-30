// input.c <-- SCORE 형식 정의 매크로 상수 추가
#include <stdio.h>

// 매크로 상수: 학생 수
#define stuMAXSIZE 3

// 형식(재) 정의된 구조체: SCORE
typedef  struct  _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
} SCORE;

void  INPUT(SCORE *pArr, int num)
{
	for (int i = 0; i < stuMAXSIZE; i++, pArr++)	{
		printf("\n %d 번째 학생 성적 입력... \n", i + 1);
		printf("학생 이름 : ");	gets_s(pArr->name, sizeof(pArr->name));
		printf("국어 점수 : ");	scanf_s("%d", &pArr->kor);
		printf("영어 점수 : ");	scanf_s("%d", &pArr->eng);
		printf("수학 점수 : ");	scanf_s("%d%*c", &pArr->math);
		// fflush(stdin);

		pArr->tot = pArr->kor + pArr->eng + pArr->math;
		pArr->ave = (float)pArr->tot / 3;
	}

	return;
}

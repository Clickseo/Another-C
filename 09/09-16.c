// 단일 컴파일 환경
#include <stdio.h>

// 매크로 상수: 학생 수
#define stuMAXSIZE 3

typedef  struct  _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
} SCORE;

void	INPUT(SCORE *pArr, int num);
void	OUTPUT(SCORE *pArr, int num);

int main(void)
{
	SCORE	arr[stuMAXSIZE];

	INPUT(arr, stuMAXSIZE);
	OUTPUT(arr, stuMAXSIZE);

	return 0;
}

void  INPUT(SCORE *pArr, int num)
{
	for (int i = 0; i < stuMAXSIZE; i++, pArr++) {
		printf("\n %d 번째 학생 성적 입력... \n", i + 1);
		printf("학생 이름: ");	gets_s(pArr->name, sizeof(pArr->name));
		printf("국어 점수: ");	scanf_s("%d", &pArr->kor);
		printf("영어 점수: ");	scanf_s("%d", &pArr->eng);
		printf("수학 점수: ");	scanf_s("%d%*c", &pArr->math);
		// fflush(stdin);

		pArr->tot = pArr->kor + pArr->eng + pArr->math;
		pArr->ave = (float)pArr->tot / 3;
	}

	return;
}

void  OUTPUT(SCORE *pArr, int num)
{
	printf("\n\t ### 학생 성적 ### \n");
	for (int i = 0; i < stuMAXSIZE; i++, pArr++)
		printf("%10s %3d %3d %3d %5d %8.2f \n",
			pArr->name, pArr->kor, pArr->eng, pArr->math, pArr->tot, pArr->ave);

	return;
}

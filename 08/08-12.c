// 구조체와 포인터 그리고 함수
// 함수에서 구조체 멤버 접근 방법
#include <stdio.h>

// 형식(재) 정의된 구조체: SCORE
typedef struct _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

// 
void OUTPUT(const char* pName,	int pKor, int pEng, int pMath, int pTot, float pAve);

int main(void)
{
	SCORE	a;

	printf("이름: ");	gets_s(a.name, sizeof(a.name));		// gets(a.name);
	printf("국어: ");	scanf_s("%d", &a.kor);			// scanf("%d", &a.kor);
	printf("영어: ");	scanf_s("%d", &a.eng);			// scanf("%d", &a.eng);
	printf("수학: ");	scanf_s("%d", &a.math);			// scanf("%d", &a.math);

	a.tot = a.kor + a.eng + a.math;
	a.ave = (float)(a.kor + a.eng + a.math) / 3;

	// 함수 호출: 구조체 멤버를 개별적으로 함수에 복사본 전달
	// 값에 의한 호출(pass by Value)
	OUTPUT(a.name, a.kor, a.eng, a.math, a.tot, a.ave);

	return 0;
}

void OUTPUT(const char	*pName,	int pKor, int pEng, int pMath,	int pTot, float pAve)
{
	printf("\n %10s 학생의 성적 결과 \n", pName);
	printf("국어: %3d, 영어: %3d, 수학:  %3d\n", pKor, pEng, pMath);
	printf("총점: %3d, 평균: %8.2lf \n", pTot, pAve);

	return;
}

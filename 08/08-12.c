// 구조체와 포인터 그리고 함수
// 함수에서 구조체 멤버 접근 방법
#include <stdio.h>

// 형식(재) 정의된 구조체: SCORE
typedef struct _score {
	char	name[12];
	int		kor, eng, math, tot;
	float	ave;
}SCORE;

// 
void OUTPUT(const char* pName, int pKor, int pEng, int pMath, int pTot, float pAve);

int main(void)
{
	SCORE	s;

	printf("이름: ");	gets_s(s.name, sizeof(s.name));		// gets(s.name);
	printf("국어: ");	scanf_s("%d", &s.kor);			// scanf("%d", &s.kor);
	printf("영어: ");	scanf_s("%d", &s.eng);			// scanf("%d", &s.eng);
	printf("수학: ");	scanf_s("%d", &s.math);			// scanf("%d", &s.math);

	s.tot = s.kor + s.eng + s.math;
	s.ave = (float)(s.kor + s.eng + s.math) / 3;

	// 함수 호출: 구조체 멤버를 개별적으로 함수에 복사본 전달
	// 값에 의한 호출(pass by Value)
	OUTPUT(s.name, s.kor, s.eng, s.math, s.tot, s.ave);

	return 0;
}

void OUTPUT(const char* pName, int pKor, int pEng, int pMath, int pTot, float pAve)
{
	printf("\n %10s 학생의 성적 결과 \n", pName);
	printf("국어: %3d, 영어: %3d, 수학:  %3d\n", pKor, pEng, pMath);
	printf("총점: %3d, 평균: %8.2lf \n", pTot, pAve);

	return;
}

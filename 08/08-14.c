// 구조체와 포인터 그리고 함수
// 3) 구조체의 주소를 함수에 전달(pass by Address)
#include <stdio.h>

// 형식(재) 정의된 구조체: SCORE
typedef struct _score {
	char	name[12];
	int		kor, eng, math, tot;
	float	ave;
}SCORE;

void OUTPUT(SCORE *);

int main(void)
{
	SCORE	s;

	printf("이름 : ");	gets_s(s.name, sizeof(s.name));		// gets(s.name);
	printf("국어 : ");	scanf_s("%d", &s.kor);			// scanf("%d", &s.kor);
	printf("영어 : ");	scanf_s("%d", &s.eng);			// scanf("%d", &s.eng);
	printf("수학 : ");	scanf_s("%d", &s.math);			// scanf("%d", &s.math);

	s.tot = s.kor + s.eng + s.math;
	s.ave = (float)(s.kor + s.eng + s.math) / 3;

	// 함수 호출: 구조체의 주소를 함수에 전달(pass by Address)
	OUTPUT(&s);

	return 0;
}

// 함수 정의: pS = &s
void OUTPUT(SCORE	*pS)
{
	printf("\n %10s 학생의 성적 결과 \n", pS->name);
	printf("국어: %3d, 영어: %3d, 수학:  %3d \n", pS->kor, pS->eng, pS->math);
	printf("총점 : %3d, 평균: %8.2lf \n", pS->tot, pS->ave);

	return;
}

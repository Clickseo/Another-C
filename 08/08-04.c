// 구조체 선언 및 정의: 형식(재) 정의된 구조체
#include <stdio.h>

// 형식(재) 정의된 구조체: SCORE
typedef struct _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	// 구조체형 변수 선언
	SCORE	s;

	printf("이름 : ");	gets_s(s.name, sizeof(s.name));		// gets(s.name);
	printf("국어 : ");	scanf_s("%d", &s.kor);			// scanf("%d", &s.kor);
	printf("영어 : ");	scanf_s("%d", &s.eng);			// scanf("%d", &s.eng);
	printf("수학 : ");	scanf_s("%d", &s.math);			// scanf("%d", &s.math);

	s.tot = s.kor + s.eng + s.math;
	s.ave = (float)(s.kor + s.eng + s.math) / 3;

	printf("\n %10s 학생의 성적 결과 \n", s.name);
	printf("국어: %3d, 영어: %3d, 수학:  %3d \n", s.kor, s.eng, s.math);
	printf("총점: %3d, 평균: %8.2lf \n", s.tot, s.ave);

	return 0;
}

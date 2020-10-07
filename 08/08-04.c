// 구조체 선언 및 정의: 형식(재) 정의된 구조체
#include <stdio.h>

typedef struct _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	// 구조체형 변수 선언
	SCORE	a;

	printf("이름 : ");	gets_s(a.name, sizeof(a.name));		// gets(a.name);
	printf("국어 : ");	scanf_s("%d", &a.kor);			// scanf("%d", &a.kor);
	printf("영어 : ");	scanf_s("%d", &a.eng);			// scanf("%d", &a.eng);
	printf("수학 : ");	scanf_s("%d", &a.math);			// scanf("%d", &a.math);

	a.tot = a.kor + a.eng + a.math;
	a.ave = (float)(a.kor + a.eng + a.math) / 3;

	printf("\n %10s 학생의 성적 결과 \n", a.name);
	printf("국어: %3d, 영어: %3d, 수학:  %3d \n", a.kor, a.eng, a.math);
	printf("총점: %3d, 평균: %8.2lf \n", a.tot, a.ave);

	return 0;
}

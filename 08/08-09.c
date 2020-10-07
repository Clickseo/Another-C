// 구조체와 포인터
// 1) 구조체형 변수의 간접 접근 방법: 포인터형 변수
#include <stdio.h>

// 형식(재) 정의된 구조체: SCORE
typedef struct _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	SCORE	s;		// 구조체형 변수
	SCORE	*pS = &s;	// 포인터형 변수

	printf("이름: ");	gets_s((*pS).name, sizeof((*pS).name));		// gets((*pS).name);
	printf("국어: ");	scanf_s("%d", &(*pS).kor);			// scanf("%d", &(*pS).kor);
	printf("영어: ");	scanf_s("%d", &(*pS).eng);			// scanf("%d", &(*pS).eng);
	printf("수학: ");	scanf_s("%d", &(*pS).math);			// scanf("%d", &(*pS).math);

	(*pS).tot = (*pS).kor + (*pS).eng + (*pS).math;
	(*pS).ave = (float)((*pS).kor + (*pS).eng + (*pS).math) / 3;

	printf("\n %10s 학생의 성적 결과 \n", (*pS).name);
	printf("국어: %3d, 영어: %3d, 수학:  %3d \n", (*pS).kor, (*pS).eng, (*pS).math);
	printf("총점: %3d, 평균: %8.2lf \n", (*pS).tot, (*pS).ave);

	return 0;
}

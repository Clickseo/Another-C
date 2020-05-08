#include <stdio.h>

// 구조체의 형식 정의
typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	// 구조체형 변수 선언
	SCORE	a;

	// 사용자에게 각각의 데이터 입력 처리
	printf("이름 : ");	gets(a.name);
	printf("국어 : ");	scanf("%d", &a.kor);
	printf("영어 : ");	scanf("%d", &a.eng);
	printf("수학 : ");	scanf("%d", &a.math);

		// 입력된 3과목의 데이터를 이용한 총점과 평균 계산
	a.tot = a.kor + a.eng + a.math;
	a.ave = (float)(a.kor + a.eng + a.math) / 3;

	// 한 명의 성적에 대한 결과 출력
	printf("\n %10s 학생의 성적 결과 \n", a.name);
	printf("국어 : %3d, 영어 : %3d, 수학 :  %3d \n", 
				a.kor, a.eng, a.math);
	printf("총점 : %3d, 평균 : %8.2lf \n", a.tot, a.ave);

	return 0;
}

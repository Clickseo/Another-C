#include <stdio.h>

// 함수 원형 선언 : SUM, AVE 함수
int	SUM(int, int, int);
double	AVE(int, int, int);

int main(void)
{
	int	kor, eng, math, tot;
	double	ave;

	printf("3과목의 점수 입력: ");
	scanf_s("%d %d %d", &kor, &eng, &math);
	// scanf("%d %d %d", &kor, &eng, &math);

	// 직접 계산: 총점과 평균 계산 -- 단일 함수(main 함수)
	// sum = kor + eng + math;
	// ave = (kor + eng + math) / 3.0;

	// 함수 호출 : 총점(SUM 함수)과 평균(AVE 함수) 계산
	sum = SUM(kor, eng, math);
	ave = AVE(kor, eng, math);

	printf("총점: %d, 평균: %.2lf \n", tot, ave);

	return 0;
}

// 함수 정의: SUM 함수 -- 3과목에 대한 총점 계산
int	SUM(int a, int b, int c) {
	return a + b + c;
}

// AVE 함수 정의 : 3과목에 대한 평균 계산
double	AVE(int a, int b, int c) {
	return (a + b + c) / 3.0;
}

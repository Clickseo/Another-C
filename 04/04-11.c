#include <stdio.h>

// 함수 원형 선언
int	SUM(int, int, int);
double	AVE(int, int, int);

int main(void)
{
	int	kor, eng, math, tot;
	double	ave;

	printf("세 과목의 점수 입력 : ");
	scanf("%d %d %d", &kor, &eng, &math);

	// 단일 함수인 main( ) 함수만으로 총점과 평균을 직접 계산
	// tot = kor + eng + math;
	// ave = (kor + eng + math) / 3.0;

	// 총점과 평균을 함수 호출을 통하여 계산
	tot = SUM(kor, eng, math);
	ave = AVE(kor, eng, math);

	printf("총점 : %d, 평균 : %.2lf \n", tot, ave);

	return 0;
}

// 3과목에 대한 총점을 구하는 함수 정의
int	SUM(int a, int b, int c)
{
	return a + b + c;
}

// 3과목에 대한 평균을 구하는 함수 정의
double	AVE(int a, int b, int c)
{
	return (a + b + c) / 3.0;
}

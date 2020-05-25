// 성적 계산 : 3과목의 점수에 대한 총점과 평균 계산
#include <stdio.h>
int main(void)
{
	int	kor, eng, math, tot;
	double	ave;

	printf("세 과목의 점수 입력 : ");
	scanf_s("%d %d %d", &kor, &eng, &math);		// scanf("%d %d %d", &kor, &eng, &math);

	tot = kor + eng + math;
	ave = (kor + eng + math) / 3.0;

	printf("총점 : %d, 평균 : %.2lf \n", tot, ave);

	return 0;
}

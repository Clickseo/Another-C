#include <stdio.h>
int main(void)
{
	int	kor, eng, math, tot;
	double	ave;

	printf("세 과목의 점수 입력 : ");
	scanf("%d %d %d", &kor, &eng, &math);

	tot = kor + eng + math;
	ave = (kor + eng + math) / 3.0;

	printf("총점 : %d, 평균 : %.2lf \n", tot, ave);

	return 0;
}

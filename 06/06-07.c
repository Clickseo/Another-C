#include <stdio.h>
int main(void)
{
	char	str[] = "서두옥 70 80 90 240 80.0";
	char	name[12];
	int	kor, eng, math, tot;
	double	ave;

	scanf_s(str, "%s %d %d %d %d %lf", name, sizeof(name), &kor, &eng, &math, &tot, &ave);

	printf("이름 : %5s \n", name);
	printf("국어 : %5d \n", kor);
	printf("영어 : %5d \n", eng);
	printf("수학 : %5d \n", math);
	printf("총점 : %5d \n", tot);
	printf("평균 : %5.2lf \n", ave);

	return 0;
}

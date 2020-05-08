#include <stdio.h>
#include <string.h>
int main(void)
{
	// 구조체형 변수 선언
	struct
	{
		char	name[12];
		int	kor, eng, math, tot;
		float	ave;
	}a;

	// 구조체형 변수의 각 멤버에 데이터 저장
	strcpy(a.name, "홍길동");
	a.kor = 70;
	a.eng = 80;
	a.math = 90;

	// 총점과 평균 계산
	a.tot = a.kor + a.eng + a.math;
	a.ave = (float)(a.kor + a.eng + a.math)/3;

	printf("%10s, %3d, %3d, %3d, %5d, %8.2lf \n", 
		a.name, a.kor, a.eng, a.math, a.tot, a.ave);

	return 0;
}

// 구조체 형식 정의 및 선언: 구조체 멤버 접근
#include <stdio.h>
#include <string.h>	// strcpy, strcpy_s
int main(void)
{
	// 구조체 변수
	struct {
		char	name[12];
		int	kor, eng, math, tot;
		float	ave;
	}temp;

	// 구두점 연산자(.): 구조체 멤버 접근
	// strcpy(temp.name, "홍길동");
	strcpy_s(temp.name, sizeof(temp.name), "홍길동");
	temp.kor = 70;
	temp.eng = 80;
	temp.math = 90;

	temp.tot = temp.kor + temp.eng + temp.math;
	temp.ave = (float)(temp.kor + temp.eng + temp.math) / 3;

	printf("%10s, %3d, %3d, %3d, %5d, %8.2lf \n",
		temp.name, temp.kor, temp.eng, temp.math, temp.tot, s.ave);

	return 0;
}

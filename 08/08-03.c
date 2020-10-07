// 구조체 선언 및 정의: 구조체 멤버 접근
#include <stdio.h>
#include <string.h>	// strcpy / strcpy_s
int main(void)
{
	// 구조체형 변수
	struct {
		char	name[12];
		int	kor, eng, math, tot;
		float	ave;
	}s;

	// 구두점 연산자(.): 구조체 멤버 접근
	// 구조체 멤버에 데이터 저장
	// strcpy(s.name, "홍길동");
	strcpy_s(s.name, sizeof(s.name), "홍길동");
	s.kor = 70;
	s.eng = 80;
	s.math = 90;

	s.tot = s.kor + s.eng + s.math;
	s.ave = (float)(s.kor + s.eng + s.math) / 3;

	printf("%10s, %3d, %3d, %3d, %5d, %8.2lf \n",
		s.name, s.kor, s.eng, s.math, s.tot, s.ave);

	return 0;
}

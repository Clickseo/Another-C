#include <stdio.h>
#include <string.h>
int main(void)
{
	// ����ü�� ���� ����
	struct
	{
		char	name[12];
		int	kor, eng, math, tot;
		float	ave;
	}a;

	// ����ü�� ������ �� ����� ������ ����
	strcpy(a.name, "ȫ�浿");
	a.kor = 70;
	a.eng = 80;
	a.math = 90;

	// ������ ��� ���
	a.tot = a.kor + a.eng + a.math;
	a.ave = (float)(a.kor + a.eng + a.math)/3;

	printf("%10s, %3d, %3d, %3d, %5d, %8.2lf \n", 
		a.name, a.kor, a.eng, a.math, a.tot, a.ave);

	return 0;
}

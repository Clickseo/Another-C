#include <stdio.h>
int main(void)
{
	int	kor, eng, math, tot;
	double	ave;

	printf("�� ������ ���� �Է� : ");
	scanf("%d %d %d", &kor, &eng, &math);

	tot = kor + eng + math;
	ave = (kor + eng + math) / 3.0;

	printf("���� : %d, ��� : %.2lf \n", tot, ave);

	return 0;
}

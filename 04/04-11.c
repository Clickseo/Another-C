#include <stdio.h>

// �Լ� ���� ����
int	SUM(int, int, int);
double	AVE(int, int, int);

int main(void)
{
	int	kor, eng, math, tot;
	double	ave;

	printf("�� ������ ���� �Է� : ");
	scanf("%d %d %d", &kor, &eng, &math);

	// ���� �Լ��� main( ) �Լ������� ������ ����� ���� ���
	// tot = kor + eng + math;
	// ave = (kor + eng + math) / 3.0;

	// ������ ����� �Լ� ȣ���� ���Ͽ� ���
	tot = SUM(kor, eng, math);
	ave = AVE(kor, eng, math);

	printf("���� : %d, ��� : %.2lf \n", tot, ave);

	return 0;
}

// 3���� ���� ������ ���ϴ� �Լ� ����
int	SUM(int a, int b, int c)
{
	return a + b + c;
}

// 3���� ���� ����� ���ϴ� �Լ� ����
double	AVE(int a, int b, int c)
{
	return (a + b + c) / 3.0;
}

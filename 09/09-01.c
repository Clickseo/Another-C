#include <stdio.h>
// ��ũ�� ���
#define	 PI  3.14159
int main(void)
{
	double		area, radius;

	printf("���� ������ �Է� : ");
	scanf("%lf", &radius);

	area = radius * radius * PI;

	printf("\n���� ���� %.2f\n", area);

	return 0;
}

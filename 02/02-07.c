#include <stdio.h>
int main(void)
{
	int		r = 10;			// r: ���� ������
	double		res;
	const double	PI = 3.14159;		// ��ȣ ���: ������

	res = r * r * PI;		// 314.159000

	printf("������: %f \n", res);

	return 0;
}

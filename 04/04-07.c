#include <stdio.h>
int main(void)
{
	int	a, b, c, d, max;

	printf("4���� ���� �Է� : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	// 4���� ���� �� �߿��� �ִ��� ���ϴ� �κ�
	if(a > b)	max = a;
	else		max = b;

	if(c > max)	max = c;
	if(d > max)	max = d;

	printf("�ִ� : %d \n", max);

	return 0;
}

#include <stdio.h>

// �Լ� ���� ����
int	MAX(int, int, int, int);

int main(void)
{
	int	a, b, c, d, max;

	printf("4���� ���� �Է� : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	// �Լ� ȣ�� : 4���� ���� �� �ִ� ���ϱ�
	max = MAX(a, b, c, d);

	printf("�ִ� : %d \n", max);

	return 0;
}

// �Լ� ���� : �Է� ���� 4���� ���� �� �ִ� ��ȯ
int	MAX(int a, int b, int c, int d)
{
	int		max;

	// 4���� ���� �� �߿��� �ִ��� ���ϴ� �κ�
	if(a > b)	max = a;
	else		max = b;

	if(c > max)	max = c;
	if(d > max)	max = d;

	// ���� �ִ��� ȣ�� �Լ�(main)�� ��ȯ
	return max;
}

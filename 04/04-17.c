#include <stdio.h>
int	DIV(int, int, int *);
int main(void)
{
	int	a = 10, b = 3;
	int	quot, rem;

	// ��� �������� ���ϱ� ���� �Լ� ȣ��
	quot = DIV(a, b, &rem);

	printf("�� : %d, ������ : %d \n", quot, rem);	// 3, 1

	return 0;
}

// ��� �������� ���ÿ� ���ϴ� �Լ�
int	DIV(int a, int b, int *pRem)
{
	int	quot;

	quot = a / b;
	// ���� �������� ȣ�� �Լ�(main)�� �Ϲ� ���� rem�� ���� ����
	*pRem = a % b;	// rem = a % b;

	// ���� ���� ȣ�� �Լ��� ��ȯ
	return quot;
}

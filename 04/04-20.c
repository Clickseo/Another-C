#include <stdio.h>
void	OUTPUT(void);
int main(void)
{
	// ���� ���� ���� �� �ʱ�ȭ
	int	a = 10;

	printf("a : %d \n", a);		// 10
	{
		// ���� ���� ���� �� �ʱ�ȭ
		int	a = 20;
		printf("a : %d \n", a);	// 20
	}
	printf("a : %d \n", a);		// 10

	OUTPUT();

	return 0;
}

void	OUTPUT(void)
{
	// ���� ���� ���� �� ���
	int	a;
	printf("a : %d \n", a);	// ������ ��
}

#include <stdio.h>
void	OUTPUT(void);

// ���� ���� ����
int	a;

int main(void)
{
	// �������� ���� �� �ʱ�ȭ
	int	a = 10;
	printf("a : %d \n", a);	// a : 10

	OUTPUT();

	return 0;
}

void	OUTPUT(void)
{
	// ���� ������ ���� �� ���
	printf("a : %d \n", a);	// a : 0
}

#include <stdio.h>
void OUTPUT(void);

// ���� ���� ����: ���α׷� ���� �� ������ ������ �Ҵ�
int	a;

int main(void)
{
	// �ʱ�ȭ�� ���� ������ ���
	printf("a : %d \n", a);		// 0

	OUTPUT();

	// ������ ���� ������ ���
	printf("a : %d \n", a);		// 1

	return 0;
}

void OUTPUT(void)
{
	// �ʱ�ȭ�� ���� ������ ���
	printf("a : %d \n", a);	// 0
	// ���� ������ ���� ����
	a++;
}

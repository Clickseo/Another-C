#include <stdio.h>
int main(void)
{
	int	a;
	int	*p = &a;	// �������� ������ ���� �� �ʱ�ȭ

	printf("������ ���� �Է� : ");
	scanf("%d", p);

	printf("a : %d \n", a);

	return 0;
}

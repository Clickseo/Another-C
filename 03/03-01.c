#include <stdio.h>
int main(void)
{
	int	a;		// �Ϲ� ���� ����
	int	*p;		// �������� ���� ����

	a = 10;		// �Ϲ� ������ ������ ����
	p = &a;		// �������� ������ ������ ����

	printf("a  : %d, %d \n", a, *p );	// a : 10, 10
	printf("&a : %p, %p \n", &a, p );

	return 0;
}

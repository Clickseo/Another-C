#include <stdio.h>
int main(void)
{
	int	a = 10;
	int	b = 20;
	int * const pa = &a;

	printf("a : %d, *pa : %d \n", a, *pa);
	a = 50;	// �޸� ���� ������ ����!!!

	*pa = 20;	// ���ü�� ������ ���� ����!!!
	pa = &b;	// error : ������ pa�� �޸� �ּ� ���� �Ұ�!!!

	return 0;
}

#include <stdio.h>
int main(void)
{
	int	a;
	void	*p = &a;

	printf("������ ���� �Է� : ");
	scanf("%d", p);

	*(int *)p = *(int *)p + 1;		// a = a + 1;

	printf("a : %d \n", *(int *)p );

	return 0;
};

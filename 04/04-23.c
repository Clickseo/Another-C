#include <stdio.h>
void  SUM(int);
int main(void)
{
	int	i;

	for (i=0; i<10; i++)
		SUM(i);

	return 0;
}

void  SUM(int num)
{
	// ���� ���� ������ ó�� �Լ� ȣ�� �� �� ���� �ʱ�ȭ
	static  int	sum = 0;

	sum += num;

	printf("num = %d, sum = %d \n", num, sum);
}

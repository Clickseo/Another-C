#include <stdio.h>
int main(void)
{
	int	i, size, state, num;

	printf("������ ���� �Է� : ");
	scanf("%d", &num);

	// �־��� �ڷ����� �Ҵ� ���� �� ��Ʈ ���
	size = sizeof(int) * 8;

	for(i=1; i<=size; i++)
	{
		// �� �ڸ��� ��Ʈ�� 1�Ǵ� 0���� �Ǵ�
		state  =  num  >>  (size  -  i)  &  1;

		if(state)	putchar('1');
		else		putchar('0');

		// 4��Ʈ�� ��� ���
		if(i%4 == 0)	putchar(' ');
	}
	putchar('\n');

	return 0;
}

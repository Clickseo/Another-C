#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int    i;
	int	**table = NULL;

	// 1�ܰ� : ������ �迭 ����
	table  =  (int  **)calloc(4, sizeof(int *));

	// 2�ܰ� : �������� �����͸� ������ 1���� �迭�� �޸� ���� Ȯ��
	table[0]  =  (int *)calloc(2,  sizeof(int));
	table[1]  =  (int *)calloc(1,  sizeof(int));
	table[2]  =  (int *)calloc(3,  sizeof(int));

	// ������ ����
	table[0][0] = 10;
	table[0][1] = 20;

	table[1][0] = 30;

	table[2][0] = 40;
	table[2][1] = 50;
	table[2][2] = 60;

	// �������� �Ҵ���� �޸� ���� �ݳ�!!!
	for(i = 0;  i < 3;  i++)
		free(table[i]);
	free(table);

	return 0;
}

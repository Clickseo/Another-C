#include <stdio.h>

#define ROW 3		// �� : 2���� �迭�� ���� ����
#define COL 5		// �� : �� 1���� �迭�� ���� ����

int main(void)
{
	int	i, j;
	int	table[3][5];

	// 2���� �迭�� �� ��� ���� ������ �Է�
	for(i=0; i<ROW; i++)
	{
		printf("%3d : ", i+1);

		for(j=0; j<COL; j++)
			scanf("%d", &table[i][j]);
	}

	// 2���� �迭�� �� ��� ���� ������ ���
	for(i=0; i<ROW; i++)
	{
		printf("%3d : ", i+1);

		for(j=0; j<COL; j++)
			printf("%3d", table[i][j]);
		printf("\n");
	}

	return 0;
}

#include <stdio.h>
int main(void)
{
	int	i, j;
	int	table[3][5] = { {   0,  1,  2,  3,  4}, 
				   { 10, 11, 12, 13, 14},
				   { 20, 21, 22, 23, 24} };

	// 2���� �迭 ���� ����(��)��ŭ....
	for(i=0; i<3; i++)
	{
		// ������ 1���� �迭 ���� ����(��)��ŭ...
		for(j=0; j<5; j++)
			printf("%3d", table[i][j]);

		printf("\n");
	}

	return 0;
}

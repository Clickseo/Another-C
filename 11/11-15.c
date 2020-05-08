#include <stdio.h>

#define ROW 3		// 행 : 2차원 배열의 원소 개수
#define COL 5		// 열 : 각 1차원 배열의 원소 개수

int main(void)
{
	int	i, j;
	int	table[3][5];

	// 2차원 배열의 각 행과 열에 데이터 입력
	for(i=0; i<ROW; i++)
	{
		printf("%3d : ", i+1);

		for(j=0; j<COL; j++)
			scanf("%d", &table[i][j]);
	}

	// 2차원 배열의 각 행과 열의 데이터 출력
	for(i=0; i<ROW; i++)
	{
		printf("%3d : ", i+1);

		for(j=0; j<COL; j++)
			printf("%3d", table[i][j]);
		printf("\n");
	}

	return 0;
}

#include <stdio.h>

#define ROW 3
#define COL 5

void INPUT(int (*)[COL], int, int);
void OUTPUT(int (*)[COL], int, int);

int main(void)
{
	int	table[3][5];

	INPUT(table, ROW, COL);
	OUTPUT(table, ROW, COL);

	return 0;
}

void INPUT(int (*p)[COL], int row, int col)
{
	int	i, j;

	for(i=0; i<row; i++)
	{
		printf("%3d : ", i+1);

		for(j=0; j<col; j++)
			scanf("%d", *(p+i)+j );
	}

	return;
}

void OUTPUT(int (*p)[COL], int row, int col)
{
	int	i, j;

	for(i=0; i<row; i++)
	{
		printf("%3d : ", i+1);

		for(j=0; j<col; j++)
			printf("%3d", *(*(p+i)+j) );
		printf("\n");
	}

	return;
}

// 2차원 배열 : 포인터와 함수
#include <stdio.h>

#define ROW 3		// 행
#define COL 5		// 열

void INPUT(int (*)[COL], int, int);
void OUTPUT(int (*)[COL], int, int);

int main(void)
{
	// 3행 5열의 2차원 배열 선언
	int	table[3][5];

	INPUT(table, ROW, COL);
	OUTPUT(table, ROW, COL);

	return 0;
}

void INPUT(int (*p)[COL], int row, int col) {
	for(int i=0; i<row; i++) {
		printf("%3d : ", i+1);
		for(int j=0; j<col; j++)
			scanf_s("%d", *(p+i)+j );
	}
	return;
}

void OUTPUT(int (*p)[COL], int row, int col) {
	for(int i=0; i<row; i++) {
		printf("%3d : ", i+1);
		for(int j=0; j<col; j++)
			printf("%3d", *(*(p+i)+j) );
		printf("\n");
	}	
	return;
}

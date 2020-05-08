#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int    i;
	int	**table = NULL;

	// 1단계 : 포인터 배열 생성
	table  =  (int  **)calloc(4, sizeof(int *));

	// 2단계 : 실제적인 데이터를 저장할 1차원 배열의 메모리 공간 확보
	table[0]  =  (int *)calloc(2,  sizeof(int));
	table[1]  =  (int *)calloc(1,  sizeof(int));
	table[2]  =  (int *)calloc(3,  sizeof(int));

	// 데이터 저장
	table[0][0] = 10;
	table[0][1] = 20;

	table[1][0] = 30;

	table[2][0] = 40;
	table[2][1] = 50;
	table[2][2] = 60;

	// 동적으로 할당받은 메모리 공간 반납!!!
	for(i = 0;  i < 3;  i++)
		free(table[i]);
	free(table);

	return 0;
}

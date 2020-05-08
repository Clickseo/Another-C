#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE	1
#define FALSE	0
#define COL	6

int	**make_Table(int row, int col);
void	free_Table(int **table);
void	create_Lotto(int **table, int row, int col);
void	print_Lotto(int **table, int row, int col);

int main(void)
{
	int	num;
	int	**table = NULL;

	printf("로또 복권을 몇 장 구입 하실래여?? : ");
	scanf("%d", &num);
	fflush(stdin);

	table = make_Table(num, COL);
	create_Lotto(table, num, COL);
	print_Lotto(table, num, COL);
	free_Table(table);

	return 0;
}

// 로또 복권의 번호를 저장할 메모리 공간을 동적으로 확보하는 함수
int **make_Table(int row, int col)
{
	int	i, **table = NULL;

	// 1차원 배열의 메모리 시작 주소를 저장할 공간 확보
	table = (int **)calloc(row + 1, sizeof(int  *));
	if(table == NULL)
	{
		printf("메모리 할당 실패!!! \n");
		exit(100);
	}

	// 실제적인 로또 번호를 저장할 공간 확보
	for(i = 0; i < row; i++)
		*(table + i) = (int *)calloc(col, sizeof(int));

	return table;
}

// 동적으로 할당받은 메모리 공간을 반납하는 함수
void	free_Table(int **table)
{
	int	**p = table;

	while(*p)
		free(*p++);
	free(table);

	return;
}

// 로또 복권의 번호를 임의적으로 생성하는 함수
void	create_Lotto(int **table, int row, int col)
{
	int	i, j, k, temp, state;

	srand(time(NULL));

	// 행의 개수 : 로또 복권 장 수 
	for(i=0; i<row; i++)
	{
		// 로또 번호 개수
		for(j=0; j<col; j++)
		{
			state = TRUE;
			temp = rand() %45 + 1;

			// 임의 생성된 번호에 대한 중복 확인
			for(k=0; k<=j; k++)
			{
				if(table[i][k] == temp)
				{
					state = FALSE;
					break;
				}
			}

			if(state)	table[i][j] = temp;
			else		j--;
		}
	}

	return;
}

// 생성된 로또 번호 출력 함수
void	print_Lotto(int **table, int row, int col)
{
	int	i, j;

	printf("\n ### 생성된 로또 번호 ### \n\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
			printf("%02d ", *(*(table+i)+j));
		printf("\n");
	}

	return;
}

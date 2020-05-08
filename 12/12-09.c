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

	printf("�ζ� ������ �� �� ���� �ϽǷ���?? : ");
	scanf("%d", &num);
	fflush(stdin);

	table = make_Table(num, COL);
	create_Lotto(table, num, COL);
	print_Lotto(table, num, COL);
	free_Table(table);

	return 0;
}

// �ζ� ������ ��ȣ�� ������ �޸� ������ �������� Ȯ���ϴ� �Լ�
int **make_Table(int row, int col)
{
	int	i, **table = NULL;

	// 1���� �迭�� �޸� ���� �ּҸ� ������ ���� Ȯ��
	table = (int **)calloc(row + 1, sizeof(int  *));
	if(table == NULL)
	{
		printf("�޸� �Ҵ� ����!!! \n");
		exit(100);
	}

	// �������� �ζ� ��ȣ�� ������ ���� Ȯ��
	for(i = 0; i < row; i++)
		*(table + i) = (int *)calloc(col, sizeof(int));

	return table;
}

// �������� �Ҵ���� �޸� ������ �ݳ��ϴ� �Լ�
void	free_Table(int **table)
{
	int	**p = table;

	while(*p)
		free(*p++);
	free(table);

	return;
}

// �ζ� ������ ��ȣ�� ���������� �����ϴ� �Լ�
void	create_Lotto(int **table, int row, int col)
{
	int	i, j, k, temp, state;

	srand(time(NULL));

	// ���� ���� : �ζ� ���� �� �� 
	for(i=0; i<row; i++)
	{
		// �ζ� ��ȣ ����
		for(j=0; j<col; j++)
		{
			state = TRUE;
			temp = rand() %45 + 1;

			// ���� ������ ��ȣ�� ���� �ߺ� Ȯ��
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

// ������ �ζ� ��ȣ ��� �Լ�
void	print_Lotto(int **table, int row, int col)
{
	int	i, j;

	printf("\n ### ������ �ζ� ��ȣ ### \n\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
			printf("%02d ", *(*(table+i)+j));
		printf("\n");
	}

	return;
}

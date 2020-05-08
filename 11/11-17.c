#include <stdio.h>

#define ROW 5		// �л� ��
#define COL 3		// ���� ��

void	INPUT(int (*)[COL], int, int);
void	OUTPUT(int (*)[COL], int, int);
int	SUM(int *, int);
double	AVE(int *, int);

int main(void)
{
	// 5�� 3���� 2���� �迭 ����� �ʱ�ȭ
	int	score[ROW][COL] = {0};

	// ���� �Է°� ��¿� ���� �Լ� ȣ��
	INPUT(score, ROW, COL);
	OUTPUT(score, ROW, COL);

	return 0;
}

// 5���� �л��� ���Ͽ� 3������ ���� �Է� �Լ�
void  INPUT(int (*p)[COL], int row, int col)
{
	int	i, j;

	printf("%d���� �л�����(����,����,����)�� �Է��Ͻÿ�.\n", ROW);

	// �л� �� ��ŭ...
	for(i = 0; i < row; i++)
	{
		// �� �л��� ����(����, ����, ����) �Է�
		printf("%d : ", i+1);
		for(j = 0; j < col; j++)
			scanf("%d", *(p + i) + j ); 
	}

	return;
}

// 5���� �л��� ���Ͽ� 3������ ������ ���� ������ ����� ����Ͽ� ��� �Լ�
void  OUTPUT(int (*p)[COL], int row, int col)
{
	int	i, j;

	printf("\n����  ����  ����  ���� \t ���� \t ���\n");
	for (i = 0; i < row; i++)	// �� �л��� ���� ó��
	{
		int	tot = 0;
		double	ave = 0.0;

		// �� �л��� ���� ��� �� �հ�
		printf("%2d : ", i + 1);
		for(j = 0; j < col; j++)
			printf("%5d", *(*(p + i ) + j) );

		// �� �л��� ���� : ������ ��� ���
		tot  =  SUM(*(p + i), col);
		ave  =  AVE(*(p + i), col);	

		printf("\t%5d\t%5.2f\n", tot, ave);
	}

	return;
}

// �� �л��� ���� 3������ ���� ��� �Լ�
int  SUM(int *p, int col)
{
	int	i, tot = 0;

	for(i = 0; i < col; i++)
		tot += *(p + i);

	return tot;
}

// �� �л��� ���� 3������ ��� ��� �Լ�
double  AVE(int *p,  int col)
{
	int	i, tot = 0;

	for(i = 0; i < col; i++)
		tot += *(p + i);

	return (double)tot / col;
}

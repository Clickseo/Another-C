#include <stdio.h>

#define ROW 5		// 학생 수
#define COL 3		// 과목 수

void	INPUT(int (*)[COL], int, int);
void	OUTPUT(int (*)[COL], int, int);
int	SUM(int *, int);
double	AVE(int *, int);

int main(void)
{
	// 5행 3열의 2차원 배열 선언과 초기화
	int	score[ROW][COL] = {0};

	// 성적 입력과 출력에 대한 함수 호출
	INPUT(score, ROW, COL);
	OUTPUT(score, ROW, COL);

	return 0;
}

// 5명의 학생에 대하여 3과목의 성적 입력 함수
void  INPUT(int (*p)[COL], int row, int col)
{
	int	i, j;

	printf("%d명의 학생점수(국어,영어,수학)를 입력하시오.\n", ROW);

	// 학생 수 만큼...
	for(i = 0; i < row; i++)
	{
		// 한 학생의 성적(국어, 영어, 수학) 입력
		printf("%d : ", i+1);
		for(j = 0; j < col; j++)
			scanf("%d", *(p + i) + j ); 
	}

	return;
}

// 5명의 학생에 대하여 3과목의 성적에 대한 총점과 평균을 계산하여 출력 함수
void  OUTPUT(int (*p)[COL], int row, int col)
{
	int	i, j;

	printf("\n순번  국어  영어  수학 \t 총점 \t 평균\n");
	for (i = 0; i < row; i++)	// 한 학생씩 성적 처리
	{
		int	tot = 0;
		double	ave = 0.0;

		// 한 학생의 성적 출력 및 합계
		printf("%2d : ", i + 1);
		for(j = 0; j < col; j++)
			printf("%5d", *(*(p + i ) + j) );

		// 한 학생의 성적 : 총점과 평균 계산
		tot  =  SUM(*(p + i), col);
		ave  =  AVE(*(p + i), col);	

		printf("\t%5d\t%5.2f\n", tot, ave);
	}

	return;
}

// 한 학생에 대한 3과목의 총점 계산 함수
int  SUM(int *p, int col)
{
	int	i, tot = 0;

	for(i = 0; i < col; i++)
		tot += *(p + i);

	return tot;
}

// 한 학생에 대한 3과목의 평균 계산 함수
double  AVE(int *p,  int col)
{
	int	i, tot = 0;

	for(i = 0; i < col; i++)
		tot += *(p + i);

	return (double)tot / col;
}

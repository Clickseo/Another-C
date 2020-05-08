#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1024

typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	int	state;
	SCORE	temp;
	FILE	*fpIn, *fpOut;

	// test.txt ������ �б� ���� ����
	fpIn = fopen("test.txt", "r");
	if(fpIn == NULL)
	{
		printf("test.txt ���� ���� ����!!! \n");
		exit(100);
	}

	// copy.txt ������ ���� ���� ����
	fpOut = fopen("copy.txt", "w");
	if(fpOut == NULL)
	{
		printf("copy.txt ���� ���� ����!!! \n");
		exit(100);
	}

	// ������ ���� ���� �� ����...
	// test.txt���Ͽ��� �� �л��� ������ �о� copy.txt ���Ͽ� ����
	while(1)
	{
		state = fscanf(fpIn, "%s %d %d %d %d %f", 
		&temp.name, &temp.kor, &temp.eng, &temp.math,
		&temp.tot, &temp.ave);

		// fscanf( ) �Լ��� ��ȯ���� EOF�̸� �ݺ����� ����
		if(state == EOF)
			break;

		fprintf(fpOut, "%10s %3d %3d %3d %5d %8.2f \n",
			temp.name, temp.kor, temp.eng, temp.math,
			temp.tot, temp.ave);
	}

	fclose(fpIn);
	fclose(fpOut);

	return 0;
}

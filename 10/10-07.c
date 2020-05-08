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

	// test.txt 파일을 읽기 모드로 개방
	fpIn = fopen("test.txt", "r");
	if(fpIn == NULL)
	{
		printf("test.txt 파일 열기 실패!!! \n");
		exit(100);
	}

	// copy.txt 파일을 쓰기 모드로 개방
	fpOut = fopen("copy.txt", "w");
	if(fpOut == NULL)
	{
		printf("copy.txt 파일 열기 실패!!! \n");
		exit(100);
	}

	// 파일의 끝을 만날 때 까지...
	// test.txt파일에서 한 학생의 성적을 읽어 copy.txt 파일에 복사
	while(1)
	{
		state = fscanf(fpIn, "%s %d %d %d %d %f", 
		&temp.name, &temp.kor, &temp.eng, &temp.math,
		&temp.tot, &temp.ave);

		// fscanf( ) 함수의 반환값이 EOF이면 반복문을 종료
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

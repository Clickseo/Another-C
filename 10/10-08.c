#include <stdio.h>
#include <stdlib.h>

typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	SCORE	temp;
	FILE	*fp = NULL;

	// score.txt 파일을 읽기와 쓰기가 모두 가능하도록 열기
	fp = fopen("score.txt", "wb+");
	if(fp == NULL)
	{
		printf("score.txt 파일 열기 실패!!!\n");
		exit(100);
	}

	// 한 학생에 대한 이름과 성적을 입력 처리
	printf("이름: ");	gets(temp.name);
	printf("국어: ");	scanf("%d", &temp.kor);
	printf("영어: ");	scanf("%d", &temp.eng);
	printf("수학: ");	scanf("%d", &temp.math);

	// 총점과 평균 계산
	temp.tot = temp.kor + temp.eng + temp.math;
	temp.ave = (float)(temp.kor + temp.eng + temp.math) / 3;

	// 입력 받은 정보를 SCORE 크기의 블록만큼 파일에 저장
	fwrite(&temp, sizeof(SCORE), 1, fp);

	// score.txt 파일의 첫 번째 부분으로 파일 포인터를 이동
	rewind(fp);

	// score.txt 파일의 첫 번째 부분부터 SCORE 크기의 블록만큼 읽어옴
	fread(&temp, sizeof(SCORE), 1, fp);

	printf("\n ### 입력된 정보 ### \n\n");
	printf("이름: %s \n", temp.name);
	printf("국어: %d \n", temp.kor);
	printf("영어: %d \n", temp.eng);
	printf("수학: %d \n", temp.math);
	printf("총점: %d \n", temp.tot);
	printf("평균 : %.1f \n", temp.ave);

	fclose(fp);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "score.h"

// 데이터 저장 파일을 외부 변수로 지정
extern const char	*file;

void INPUT(void)
{
	SCORE	temp;
	FILE	*fp = NULL;

	// data.txt 파일을 쓰기 모드로 열기
	fp  =  fopen(file, "ab");
	if(fp == NULL)
	{
		printf("%s 파일 열기 실패!!! \n", file);
		exit(100);
	}

	printf("이름: ");	gets(temp.name);
	printf("국어: ");	scanf("%d", &temp.kor);
	printf("영어: ");	scanf("%d", &temp.eng);
	printf("수학: ");	scanf("%d%*c", &temp.math);

	temp.tot = temp.kor + temp.eng + temp.math;
	temp.ave = (float)temp.tot / 3;

	// SCORE 블록 크기만큼 data.txt 파일 버퍼에 기록
	fwrite(&temp,  sizeof(SCORE),  1,  fp);

	fclose(fp);

	return;
}

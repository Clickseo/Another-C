#include <stdio.h>
#include <stdlib.h>
#include "score.h"

// 데이터 저장 파일을 외부 변수로 지정
extern const char	*file;

void OUTPUT(void)
{
	SCORE	temp;
	FILE	*fp = NULL;

	// data.txt 파일을 읽기 모드로 열기
	fp  =  fopen(file,  "rb");
	if(fp == NULL)
	{
		printf("파일 열기 실패!!! \n");
		exit(200);
	}

	// SCORE 블록 크기만큼 data.txt 파일 버퍼에 1회 읽어 옴
	while(fread(&temp, sizeof(SCORE), 1, fp))
		printf("%10s %3d %3d %3d %5d %8.2f\n",
			temp.name, temp.kor, temp.eng, temp.math,
			temp.tot, temp.ave);

	fclose(fp);

	return;
}

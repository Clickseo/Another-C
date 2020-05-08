#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char	ch;

	// a.txt을 읽기 모드로 개방
	FILE	*fp = fopen("a.txt", "r");
	if(fp == NULL)	// 파일 열기 실패 시 에러 처리
	{
		printf("파일 열기 실패!!! \n");
		exit(100);
	}

	// 파일 버퍼에서 한 문자 읽기
	ch = fgetc(fp);

	// 표준 출력 버퍼에 한 문자 쓰기
	putchar(ch);

	fclose(fp);

	return 0;
}

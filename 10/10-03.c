#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char	ch;

	// a.txt 파일을 쓰기 모드로 개방
	FILE	*fp = fopen("a.txt", "w");
	if(fp == NULL)	// 파일 열기 실패 시 에러 처리
	{
		printf("파일 열기 실패!!! \n");
		exit(100);
	}

	// 표준 입력 버퍼에서 한 문자 읽기
	ch = getchar();

	// 생성된 파일 버퍼에 한 문자 쓰기
	fputc(ch, fp);

	fclose(fp);

	return 0;
}

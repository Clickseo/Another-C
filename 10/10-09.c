#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	ch;
	FILE	*fp = NULL;

	// test.txt 파일을 읽기 모드로 열기
	fp = fopen("test.txt", "r");
	if(fp == NULL)
	{
		// test.txt 파일 열기 실패 시 에러 메시지 출력
		perror("test.txt 파일 열기 실패");
		exit(100);
	}

	// test.txt 파일의 모든 내용을 표준 출력(모니터)
	while((ch = fgetc(fp)) != EOF)
		putchar(ch);

	// 읽기 도중 주어진 파일 스트림에 오류가 발생했는지 여부 판단
	if(ferror(fp))
		puts("읽기 도중 입출력(I/O) 에러 발생!!!");

	// 성공적으로 파일의 끝에 도달 했는지 여부 판단
	if(feof(fp))
		puts("성공적으로 파일의 끝에 도달!!!");

	return 0;
}

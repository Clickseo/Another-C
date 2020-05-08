#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1024
int main(void)
{
	char	str[MAX_SIZE];
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
	// test.txt파일에서 한 문자열을 읽어 copy.txt 파일에 복사
	while(fgets(str, sizeof(str), fpIn) != NULL)
		fputs(str, fpOut);

	fclose(fpIn);
	fclose(fpOut);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int  main(int argc, char *argv[])
{
	int	ch;
	FILE	*fpIn, *fpOut;

	// 잘못된 프로그램 사용에 대한 에러 처리
	if(argc < 3)
	{
		printf("사용법 : my_copy  원본파일명  복사파일명 \n\n");
		exit(10);
	}

	printf("파일 복사중... \n\n");
	if(!(fpIn = fopen(argv[1], "r")))
	{
		printf("%s 파일 열기 실패!!! \n", argv[1]);
		exit(100);
	}

	if(!(fpOut = fopen(argv[2], "w")))
	{
		printf("%s 파일 열기 실패!!! \n", argv[2]);
		exit(200);
	}

	// 원본 파일(argv[1])의 모든 문자를 대상 파일(argv[2])로 복사
	while((ch = fgetc(fpIn)) != EOF)
		fputc(ch, fpOut);

	fclose(fpIn); 
	fclose(fpOut);

	printf("복사 완료!!! \n");

	return 0;
}

#include <stdio.h>
int main(void)
{
	// FILE 구조체 형식의 포인터형 변수 선언
	FILE	*fp = NULL;

	// fopen( ) 함수를 이용하여 "a.txt" 파일을 쓰기 모드로 열기
	fp = fopen("a.txt", "w");

	// 파일 열기 실패 시 에러 처리 부분
	if(fp == NULL)
	{
		printf("파일 열기 실패!!! \n");
		exit(100);
	}

	(세부 프로그램 생략)

	return 0;
}

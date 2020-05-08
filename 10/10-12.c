#include <stdio.h>
#include <stdlib.h>
#include "score.h"

// 데이터 저장 파일을 전역 변수로 지정
const char	*file = "score.txt";

int main(void)
{
	while(TRUE)
	{
		switch(MENU())
		{
			case 1: INPUT();	break;
			case 2: OUTPUT();	break;
			case 3: printf("프로그램 종료!!! \n");
				return 0;
			default: printf("잘못된 선택!!! \n");
		}

		system("pause");
	}

	return 0;
}

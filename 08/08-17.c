// 복합 데이터 유형: 열거형
#include <stdio.h>
// #include <stdbool.h>		// true, false

// 매크로 상수: 참(TRUE)과 거짓(FALSE)
// #define TRUE 1
// #define FALSE 0

enum BOOL { FALSE, TRUE };

int main(void)
{
	int	state = TRUE;		// int  state = 1;

	if (state == TRUE)		// if(state == 1)
		printf("참!!! \n");
	else if (state == FALSE)	// if(state == 0)
		printf("거짓!!! \n");

	return 0;
}

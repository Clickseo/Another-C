#include <stdio.h>

// 매크로 상수
// #define TRUE 1
// #define FALSE 0

enum BOOL {FALSE, TRUE};

int main(void)
{
	int	state = TRUE;		// int  state = 1;

	if(state == TRUE)			// if(state == 1)
		printf("참!!! \n");
	if(state == FALSE)			// if(state == 0)
		printf("거짓!!! \n");

	return 0;
}

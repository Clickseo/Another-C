#include <stdio.h>

// ��ũ�� ���
// #define TRUE 1
// #define FALSE 0

enum BOOL {FALSE, TRUE};

int main(void)
{
	int	state = TRUE;		// int  state = 1;

	if(state == TRUE)			// if(state == 1)
		printf("��!!! \n");
	if(state == FALSE)			// if(state == 0)
		printf("����!!! \n");

	return 0;
}

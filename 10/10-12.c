#include <stdio.h>
#include <stdlib.h>
#include "score.h"

// ������ ���� ������ ���� ������ ����
const char	*file = "score.txt";

int main(void)
{
	while(TRUE)
	{
		switch(MENU())
		{
			case 1: INPUT();	break;
			case 2: OUTPUT();	break;
			case 3: printf("���α׷� ����!!! \n");
				return 0;
			default: printf("�߸��� ����!!! \n");
		}

		system("pause");
	}

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int  main(int argc, char *argv[])
{
	char	op;
	int	a, b, res;

	// ���α׷� ��� �� ���� ó��
	if(argc < 4)
	{
		printf("���α׷� ����: calculator 10 + 20 \n");
		exit(100);
	}

	// ����ڰ� �Է��� ����� ���ڸ� ���� ��ȯ
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2][0];

	// ��Ģ ���� ����
	switch(op)
	{
		case '+': res = a + b; break;
		case '-': res = a - b; break;
		case '*': res = a * b; break;
		case '/': res = a / b; break;
		default: printf("�������� �ʴ� ������!!! \n");
			exit(200);
	}

	printf("\n��� ���: %d %c %d = %d \n", a, op, b, res);

	return 0;
}

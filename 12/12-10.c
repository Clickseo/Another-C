#include <stdio.h>
#include <stdlib.h>

int  main(int argc, char *argv[])
{
	char	op;
	int	a, b, res;

	// 프로그램 사용 시 에러 처리
	if(argc < 4)
	{
		printf("프로그램 사용법: calculator 10 + 20 \n");
		exit(100);
	}

	// 사용자가 입력한 명령행 인자를 각각 변환
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2][0];

	// 사칙 연산 수행
	switch(op)
	{
		case '+': res = a + b; break;
		case '-': res = a - b; break;
		case '*': res = a * b; break;
		case '/': res = a / b; break;
		default: printf("지원하지 않는 연산자!!! \n");
			exit(200);
	}

	printf("\n계산 결과: %d %c %d = %d \n", a, op, b, res);

	return 0;
}

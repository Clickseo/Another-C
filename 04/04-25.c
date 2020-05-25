#include <stdio.h>

void ADD1(void);
void ADD2(void);

// 전역변수 : 자동 초기화 -- 0
int i;

int main(void)
{
	// 지역변수 : 첫 번째 블럭
	int i = 10;
	i+=10;

	{
		// 지역변수 : 두 번째 블럭
		int i = 100;
		i-=10;

		ADD1();
		ADD2();

		printf("in block 1 : i = %d\n", i);
	}

	ADD1();
	ADD2();

	printf("in main() : i = %d\n", i);

	return 0;
}

// 지역 정적 변수
void ADD1(void) {
	static int i = 1000;	
	printf("in ADD1() : i = %d\n", i++);
}

// 전역 변수 i 값의 출력과 후위증가
void ADD2(void) {
	printf("in ADD2() : i = %d\n", i++);
}

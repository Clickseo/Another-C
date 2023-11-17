// 복합 데이터 유형: 공용체(Union Type)
#include <stdio.h>

// 공용체 형식 정의
typedef union _type {
	char	ch;
	int	i;
	double	d;
} TYPE;

int main(void)
{
	// 공용체 변수 선언
	TYPE	temp;

	temp.i = 0xFFFFFFFF;

	printf("TYPE 형식의 메모리 크기: %d \n", sizeof(TYPE) );	// 8
	printf("a.ch : %d \n", temp.ch );				// -1
	printf("a.i  : %d \n", temp.i );				// -1

	return 0;
}

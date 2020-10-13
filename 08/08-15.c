// 복합 데이터 유형: 공용체
#include <stdio.h>

typedef union _type {
	char	ch;
	int	i;
	double	d;
}TYPE;

int main(void)
{
	TYPE	a;

	a.i = 0xFFFFFFFF;

	printf("TYPE 형식의 메모리 크기: %d \n", sizeof(TYPE) );	 // 8
	printf("a.ch : %d \n", a.ch );					// -1
	printf("a.i  : %d \n", a.i );					// -1

	return 0;
}

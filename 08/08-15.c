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

	printf("a.ch : %d \n", a.ch);
	printf("a.i  : %d \n", a.i);

	return 0;
}

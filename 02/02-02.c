#include <stdio.h>
int main(void)
{
	double	a, b;
	int	res1, res2;

	a = 10.5;
	b = 10.5;

	res1 = a + b;			// 데이터 손실 발생
	res2 = (int)a + (int)b;		// (수동) 형 변환

	printf("res1 : %d \n", res1);	// 21
	printf("res2 : %d \n", res2);	// 20

	return 0;
}

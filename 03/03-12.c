// 포인터 연산 : 덧셈 연산
#include <stdio.h>
int main(void)
{
	int	a = 10;
	
	char	*pc = &a;	// warning C4133: '초기화 중': 'int *'과(와) 'char *' 사이의 형식이 호환되지 않습니다.
	int	*pi = &a;
	float	*pf = &a;	// warning C4133: '초기화 중': 'int *'과(와) 'float *' 사이의 형식이 호환되지 않습니다.
	double	*pd = &a;	// warning C4133: '초기화 중': 'int *'과(와) 'double *' 사이의 형식이 호환되지 않습니다.

	// 피연산자가 포인형 변수와 정수형 상수인 경우 +1의 의미
	// (가정) &a가 1000번지일 경우...
	printf("pc : %p, pc + 1 : %p \n", pc, pc + 1 );		// 1001		<-- sizeof(char) * 1 만큼 한 칸(1byte)이동
	printf("pi : %p, pi + 1  : %p \n", pi, pi + 1 );	// 1004		<-- sizeof(int) * 1 만큼 한 칸(4bytes)이동
	printf("pf : %p, pf + 1  : %p \n", pf, pf + 1 );	// 1004		<-- sizeof(float) * 1 만큼 한 칸(4bytes)이동
	printf("pd : %p, pd + 1 : %p \n", pd, pd + 1 );		// 1008		<-- sizeof(double) * 1 만큼 한 칸(8bytes)이동

	return 0;
}

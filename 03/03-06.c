#include <stdio.h>
int main(void)
{
	int	a = 256;
	
	char	*pc = &a;	// warning C4133: '초기화 중': 'int *'과(와) 'char *' 사이의 형식이 호환되지 않습니다.
	int	*pi = &a;
	float	*pf = &a;	// warning C4133: '초기화 중': 'int *'과(와) 'float *' 사이의 형식이 호환되지 않습니다.
	double	*pd = &a;	// warning C4133: '초기화 중': 'int *'과(와) 'double *' 사이의 형식이 호환되지 않습니다.

	printf("a       : %d \n", a);		// 256
	printf("a (*pc) : %d \n", *pc);		// 0
	printf("a (*pi) : %d \n", *pi);		// 256
	printf("a (*pf) : %f \n", *pf);		// 0.000000
	printf("a (*pd) : %lf \n", *pd);	// -92559592117434916707736904351003478227029224368206651278229504.000000

	return 0;
}

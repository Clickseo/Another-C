#include <stdio.h>
void  SWAP(int,  int);
int main(void)
{
	int	a = 10, b = 20;

	printf("호출 전 : a = %d, b = %d \n", a, b);	// 10 20
	SWAP(a,  b);
	printf("호출 후 : a = %d, b = %d \n", a, b);	// 10 20

	return 0;
}

void  SWAP(int  a,  int  b)
{
	int	temp;

	temp = a;
	a = b;
	b = temp;
}

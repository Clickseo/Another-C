#include <stdio.h>
void  SWAP(int,  int);
int main(void)
{
	int	a = 10, b = 20;

	printf("ȣ�� �� : a = %d, b = %d \n", a, b);	// 10 20
	SWAP(a,  b);
	printf("ȣ�� �� : a = %d, b = %d \n", a, b);	// 10 20

	return 0;
}

void  SWAP(int  a,  int  b)
{
	int	temp;

	temp = a;
	a = b;
	b = temp;
}

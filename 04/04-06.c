#include <stdio.h>
void OUTPUT(int  num);		// void OUTPUT(int);
int main(void)
{
	OUTPUT(5);

	return 0;
}

void OUTPUT(int  num)
{
	int	i;

	for(i=1; i<=num; i++)
		printf("Hello World!!! \n");

	return;
}

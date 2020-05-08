#include <stdio.h>
int main(void)
{
	int	(*p)(void) = main;

	printf("main : %p \n", main);
	printf("p     : %p \n", p);

	p();		// main();

	return 0;
}

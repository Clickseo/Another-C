#include <stdio.h>
int main(void)
{
	int	arr[5] = {10, 20, 30, 40, 50};
	int	*p = arr;

	printf("*p++ => %d \n", *p++);		// 10
	printf("*p => %d \n\n", *p);		// 20

	printf("(*p)++ => %d \n", (*p)++);	// 20
	printf("*p => %d \n\n", *p);		// 21

	printf("(*p) + 1 => %d \n", (*p) + 1);	// 22
	printf("++*p => %d \n", ++*p);		// 22
	printf("*p => %d \n\n", *p);		// 22

	printf("*++p => %d \n", *++p);		// 30
	printf("*p => %d \n", *p);			// 30

	return 0;
}

#include <stdio.h>
int main(void)
{
	int	arr[5] = { 10, 20, 30, 40, 50 };
	int	*p = arr;

	// *p++		--> (1) *p;	(2) p = p + 1;
	printf("*p++ => %d \n", *p++);		// 10
	printf("*p => %d \n\n", *p);		// 20

	// (*p)++	--> (1) *p;	(2) *p = *p + 1;
	printf("(*p)++ => %d \n", (*p)++);	// 20
	printf("*p => %d \n\n", *p);		// 21

	printf("(*p) + 1 => %d \n", (*p) + 1);	// 22
	
	// ++*p == ++(*p)
	// ++*p		--> (1) *p = *p + 1;	(2) *p;
	printf("++*p => %d \n", ++*p);		// 22
	printf("*p => %d \n\n", *p);		// 22

	// *++p		--> (1) p = p + 1;	(2) *p;
	printf("*++p => %d \n", *++p);		// 30
	printf("*p => %d \n", *p);		// 30

	return 0;
}

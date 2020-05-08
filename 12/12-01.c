#include <stdio.h>
#include <stdlib.h>		// malloc, exit

int main(void)
{
	int	*p = NULL;

	p = (int *)malloc(sizeof(int));
	if(p == NULL)
	{
		printf("메모리 할당 실패!!! \n");
		exit(100);
	}

	*p = 100;

	printf("*p = %d \n", *p);

	free(p);

	return 0;
}

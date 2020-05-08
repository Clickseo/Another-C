#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void OUTPUT(int *, int);

int main(void)
{
	int	*p = NULL;

	p = (int *)malloc(5 * sizeof(int));
	if(p == NULL)
	{
		printf("�޸� �Ҵ� ����!!! \n");
		exit(100);
	}

	printf(" memset( ) �Լ� ���� ��...\n");
	OUTPUT(p, 5);

	memset(p, 0, 5 * sizeof(int));

	printf("\n memset( ) �Լ� ���� ��...\n");
	OUTPUT(p, 5);

	free(p);

	return 0;
}

void OUTPUT(int *p, int n)
{
	int	i;

	for(i=0; i<5; i++)
		printf("%5d", *(p+i));
	printf("\n");

	return;
}

#include <stdio.h>
#include <stdlib.h>

#define INIT_SIZE 5
#define TRUE 1
#define FALSE 0

void INIT(int *, int);
void OUTPUT(int *, int);

int main (void)
{
	int	size;
	int	*DArray = NULL;

	// �ʱ� 1���� �迭 �޸� �Ҵ�
	DArray = (int *)calloc(INIT_SIZE*INIT_SIZE, sizeof(int) );
	if(DArray == NULL)
	{
		printf("�޸� �Ҵ� ����!!! \n");
		exit(100);
	}

	// �ʱ� 1���� �迭(N * N �������) ���
	printf(" ### �ʱ� 1���� ���� �迭### \n\n");
	OUTPUT(DArray, INIT_SIZE);

	while(TRUE)
	{
		printf("\n ���ο� ũ�� (���� : 0) : ");
		scanf("%d%*c", &size);
		if(size == 0)
			break;

		// ���ο� ũ���� 1���� �迭(N * N �������) �޸� ���Ҵ�
		DArray = (int *)realloc(DArray,
					size * size * sizeof(int));
		if(DArray == NULL)
		{
			printf("�޸� �Ҵ� ����!!! \n");
			exit(100);
		}

		// �� �Ҵ�� 1���� �迭(N * N �������) ���
		printf("\n ### �� �Ҵ�� 1���� ���� �迭 ### \n");
		INIT(DArray, size);
		OUTPUT(DArray, size);
	}

	free(DArray);

	return 0;
}

// 1���� �迭 �ʱ�ȭ(N * N �������)
void  INIT(int *p, int size)
{
	int	i;
	for(i = 0; i < size * size; i++)
		*(p + i) = 0;

	return;
}

// 1���� �迭 ���(N * N�� �������)
void  OUTPUT(int *p, int size)
{
	int	i;
	for(i = 0; i < size * size; i++)
		if((i+1)%size == 0)	printf("%3d\n", *(p + i) );
		else			printf("%3d", *(p + i) );

	return;
}

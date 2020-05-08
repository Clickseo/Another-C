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

	// 초기 1차원 배열 메모리 할당
	DArray = (int *)calloc(INIT_SIZE*INIT_SIZE, sizeof(int) );
	if(DArray == NULL)
	{
		printf("메모리 할당 실패!!! \n");
		exit(100);
	}

	// 초기 1차원 배열(N * N 정방행렬) 출력
	printf(" ### 초기 1차원 동적 배열### \n\n");
	OUTPUT(DArray, INIT_SIZE);

	while(TRUE)
	{
		printf("\n 새로운 크기 (종료 : 0) : ");
		scanf("%d%*c", &size);
		if(size == 0)
			break;

		// 새로운 크기의 1차원 배열(N * N 정방행렬) 메모리 재할당
		DArray = (int *)realloc(DArray,
					size * size * sizeof(int));
		if(DArray == NULL)
		{
			printf("메모리 할당 실패!!! \n");
			exit(100);
		}

		// 재 할당된 1차원 배열(N * N 정방행렬) 출력
		printf("\n ### 재 할당된 1차원 동적 배열 ### \n");
		INIT(DArray, size);
		OUTPUT(DArray, size);
	}

	free(DArray);

	return 0;
}

// 1차원 배열 초기화(N * N 정방행렬)
void  INIT(int *p, int size)
{
	int	i;
	for(i = 0; i < size * size; i++)
		*(p + i) = 0;

	return;
}

// 1차원 배열 출력(N * N의 정방행렬)
void  OUTPUT(int *p, int size)
{
	int	i;
	for(i = 0; i < size * size; i++)
		if((i+1)%size == 0)	printf("%3d\n", *(p + i) );
		else			printf("%3d", *(p + i) );

	return;
}

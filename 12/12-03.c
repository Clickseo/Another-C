#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	i, num;
	int	*pArr = NULL;

	printf("배열의 원소 개수 : ");
	scanf("%d", &num);

	pArr = (int *)calloc(num, sizeof(int));
	if(pArr == NULL)
	{
		puts("메모리 할당에 실패!!! ");
		exit(100);
	}

	// 동적 배열에 num 개수의 정수 데이터 입력
	printf("%d 개의 정수를 입력하시오... \n\n", num);
	for(i = 0; i < num; i++)
		scanf("%d", pArr + i );

	// 동적 배열에 저장된 num 개수의 정수 데이터 출력
	printf("\n ### 입력된 배열 원소 ### \n");
	for(i = 0; i < num; i++)
		printf("%3d",  *(pArr + i) );
	printf("\n");

	free(pArr);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	i, num;
	int	*pArr = NULL;

	printf("�迭�� ���� ���� : ");
	scanf("%d", &num);

	pArr = (int *)calloc(num, sizeof(int));
	if(pArr == NULL)
	{
		puts("�޸� �Ҵ翡 ����!!! ");
		exit(100);
	}

	// ���� �迭�� num ������ ���� ������ �Է�
	printf("%d ���� ������ �Է��Ͻÿ�... \n\n", num);
	for(i = 0; i < num; i++)
		scanf("%d", pArr + i );

	// ���� �迭�� ����� num ������ ���� ������ ���
	printf("\n ### �Էµ� �迭 ���� ### \n");
	for(i = 0; i < num; i++)
		printf("%3d",  *(pArr + i) );
	printf("\n");

	free(pArr);

	return 0;
}

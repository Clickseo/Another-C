#include <stdio.h>
#define MAX_SIZE 10
int main(void) 
{
	int	i, j, arr[MAX_SIZE]; 

	// ����ڷκ��� �迭�� ���� MAX_SIZE(10) ������ŭ �Է� �޴´�.
	printf("%d���� �迭 ���Ҹ� �Է��Ͻÿ�!!! \n", MAX_SIZE);
	for(i = 0; i < MAX_SIZE ; i++)
	{
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	// �迭�� �� ������ �����͸� ������׷� �������� ���
	printf("\n\n    �迭 ÷�� �� \t ������׷�\n");
	for(i = 0; i < MAX_SIZE ; i++)
	{
		printf("\t%d %5d \t", i, arr[i] );
		// �迭�� i��° ���� ������ŭ ��ǥ(*)�� ���
		for(j = 0; j < arr[i]; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}

#include <stdio.h>

// �ִ� �л��� ��
#define MAX_SIZE 10

int main(void)
{
	// �迭 ����: �л� ������ ������ �޸� ���� Ȯ��
	int	arr[MAX_SIZE];
	int	i, sum, max; 
	double	ave;

	// 10���� ���� ������ �Է�
	printf("%d���� �迭 ���Ҹ� �Է��Ͻÿ�!!! \n", MAX_SIZE);
	for(i = 0; i < MAX_SIZE ; i++)
	{
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	// ������ ��� �׸��� �ִ� ���
	sum  =  0;
	max  =  arr[0];
	for(i=0;  i<MAX_SIZE;  i++)
	{
		sum  +=  arr[i];

		if(max  <  arr[i])
			max  =  arr[i];
	}

	ave  =  (double) sum  /  MAX_SIZE;

	// ���� ��� ���
	printf("\n ����: %d, ���: %.2lf, �ִ�: %d \n",
							sum, ave, max);

	return 0;
}

#include <stdio.h>
#define MAX_SIZE 3

// ��ü �迭 ���Ҹ� ����ϱ� ���� OUTPUT( ) �Լ� ���� ����
void	OUTPUT(int *, int);

int main(void)
{
	int	arr[3] = {10, 20, 30};

	// �迭 ��ü ���� ����� ���� OUTPUT( ) �Լ� ȣ��
	OUTPUT(arr, MAX_SIZE);

	return 0;
}

// ��ü �迭 ���Ҹ� ����ϱ� ���� OUTPUT( ) �Լ� ����
void	OUTPUT(int *p, int n)
{
	int	i;

	for(i=0; i<n; i++)
		printf("arr[%d]: %d \n", i, *(p+i) );

	return;
}

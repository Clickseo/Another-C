#include <stdio.h>
#define MAX_SIZE 3

// ���� ������ �ϳ��� ����ϴ� OUTPUT( ) �Լ� ����
void	OUTPUT(int);
int main(void)
{
	int	i;
	int	arr[3] = {10, 20, 30};

	// �迭�� ���� ������ŭ OUTPUT( ) �Լ� ȣ���� �ݺ�
	for(i=0; i<MAX_SIZE; i++)
		OUTPUT(arr[i]);

	return 0;
}

// ���� ������ �ϳ��� ����ϴ� OUTPUT( ) �Լ� ����
void	OUTPUT(int temp)
{
	printf("temp: %d \n", temp );
}

#include <stdio.h>

// ��ũ�� ���: �迭�� ���� ����
#define MAX_SIZE 3

int main(void)
{
	int	i;
	// ��ũ�� ����� �̿��� �迭 ���� ���� ����
	int	arr[MAX_SIZE];		// int	arr[3];

	// ����ڷκ��� 3���� ������ ������ �Է�
	for(i=0; i<MAX_SIZE; i++)
		scanf("%d", &arr[i] );

	// �迭�� ����Ǿ� �ִ� ������ ���
	for(i=0; i<MAX_SIZE; i++)
		printf("arr[%d]: %d \n", i, arr[i] );

	return 0;
}

#include <stdio.h>
#define MAX_SIZE 3

// 3���� �迭 ���Ҹ� ����ϱ� ���� OUTPUT( ) �Լ� ���� ����
void	OUTPUT(int, int, int);

int main(void)
{
	int	arr[3] = {10, 20, 30};

	// 3���� �迭 ���Ҹ� �Լ� ���ڷ� �Ѱ� OUTPUT( ) �Լ� ȣ��
	OUTPUT(arr[0], arr[1], arr[2]);

	return 0;
}

// 3���� ������ �Ѳ����� ����ϴ� OUTPUT( ) �Լ� ����
void	OUTPUT(int a, int b, int c)
{
	printf("a: %d, b: %d, c: %d \n", a, b, c);
}

#include <stdio.h>
int main(void)
{
	// �迭 ����: �޸� �Ҵ�
	int	arr[3];

	// ������ �迭 ���ҿ� ������ ����
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	printf("�迭�� �Ҵ� ���� �޸� ũ��: %d \n\n", sizeof(arr));

	// ������ �迭 ���ҿ� ����� ������ ���
	printf("arr[0]: %d \n", arr[0] );
	printf("arr[1]: %d \n", arr[1] );
	printf("arr[2]: %d \n", arr[2] );

	return 0;
}

#include <stdio.h>

// Factorial( ) �Լ��� ���� ����
int  Factorial(int  n);

int main(void)
{
	int	num;

	printf("������ ���� �Է� : ");
	scanf("%d", &num);

	// Factorial( ) �Լ� ȣ��
	printf("Factorial %d : %d \n", num, Factorial(num) );

	return 0;
}

// Factorial( ) �Լ� ����
int  Factorial(int  n)
{
	// ��� �Լ��� Ż�� ����
	if(n <= 1)
		return 1;

	// ��� �Լ� ȣ��: Factorial( ) �Լ� ���ο��� Factorial( ) �Լ� ȣ��
	return  n * Factorial(n - 1);
}

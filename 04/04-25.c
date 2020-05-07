#include <stdio.h>

void ADD1(void);
void ADD2(void);

// ���� ����
int i;

int main(void)
{
	// ���� ����: ù ��° ��
	int i = 10;
	i+=10;

	{
		// ���� ����: �� ��° ��
		int i = 100;
		i-=10;

		ADD1();
		ADD2();

		printf("in block 1 : i = %d\n", i);
	}

	ADD1();
	ADD2();

	printf("in main() : i = %d\n", i);

	return 0;
}

void ADD1(void)
{
	// ���� ���� ����
	static int i = 1000;
	printf("in ADD1() : i = %d\n", i++);
}

void ADD2(void)
{
	// ���� ���� i�� ��°� ����
	printf("in ADD2() : i = %d\n", i++);
}

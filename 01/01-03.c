#include <stdio.h>
int main(void)
{
	// ������� ������ ���� ����
	int	year;
	int	month;
	int	day;

	// ����ڷκ��� ������� �Է� ó��
	printf("�� : ");	scanf("%d", &year);
	printf("�� : ");	scanf("%d", &month);
	printf("�� : ");	scanf("%d", &day);

	// �Է� ���� �������� ���
	printf("������ ��¥ : %d-%d-%d \n", year, month, day);

	return 0;
}

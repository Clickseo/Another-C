#include <stdio.h>

// ����ü ��Ʈ �ʵ带 �̿��� ����ü�� ���� ����
typedef struct _new_date 
{
	unsigned int	year : 15;
	unsigned int	month : 4;
	unsigned int	day : 5;
}new_DATE;

int main(void)
{
	// ����ü�� ���� ����
	new_DATE	a;

	// ����ü ��Ʈ �ʵ�� ����� ����� ������ ����
	a.year = 2011;
	a.month = 12;
	a.day = 31;

	printf("��¥ : %d-%d-%d \n", a.year, a.month, a.day); 

	return 0;
}

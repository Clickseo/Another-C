#include <stdio.h>

typedef struct _date
{
	int		year;
	int		month;
	int		day;
}DATE;

typedef struct _info
{
	char	name[12];
	DATE	birth_date;		// �������
	DATE	join_date;		// �Ի���
	DATE	resign_date;		// �����
}INFO;

int main(void)
{
	INFO	temp;

	printf("��    �� : ");
	gets(temp.name);

	printf("������� : ");
	scanf("%d %d %d", &temp.birth_date.year,
		&temp.birth_date.month, &temp.birth_date.day);

	printf("�Ի糯¥ : ");
	scanf("%d %d %d", &temp.join_date.year,
		&temp.join_date.month, &temp.join_date.day);

	printf("��糯¥ : ");
	scanf("%d %d %d", &temp.resign_date.year,
		&temp.resign_date.month, &temp.resign_date.day);

	printf("\n %10s���� ���� ���\n", temp.name);
	printf("������� : %d %d %d\n", temp.birth_date.year,
		 temp.birth_date.month, temp.birth_date.day);
	printf("�Ի糯¥ : %d %d %d\n", temp.join_date.year,
		temp.join_date.month, temp.join_date.day);
	printf("��糯¥ : %d %d %d\n", temp.resign_date.year,
		 temp.resign_date.month, temp.resign_date.day);

	return 0;
}

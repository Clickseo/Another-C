#include <stdio.h>

typedef struct _new_date 
{
	unsigned int	year : 15;
	unsigned int	month : 4;
	unsigned int	day : 5;
}new_DATE;

int main(void)
{
	int		year, month, day;
	new_DATE	a;

	printf("�� : ");
	scanf("%d", &year);
	a.year = year;

	printf("�� : ");
	scanf("%d", &month);
	a.month = month;

	printf("�� : ");
	scanf("%d", &day);
	a.day = day;

	printf("��¥ : %d-%d-%d \n", a.year, a.month, a.day); 

	return 0;
}

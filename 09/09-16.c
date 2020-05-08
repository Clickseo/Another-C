#include <stdio.h>
#define MAX_SIZE 3
typedef  struct  _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
} SCORE;

void	INPUT(SCORE  *);
void	OUTPUT(SCORE  *);

int main(void)
{
	SCORE	arr[MAX_SIZE];

	INPUT(arr);
	OUTPUT(arr);

	return 0;
}

void  INPUT(SCORE  *p)
{
	int	i;

	for(i=0; i<MAX_SIZE; i++, p++)
	{
		printf("\n %d ��° �л� ���� �Է�... \n", i+1);
		printf("�л� �̸� : ");	gets(p->name);
		printf("���� ���� : ");	scanf("%d", &p->kor);
		printf("���� ���� : ");	scanf("%d", &p->eng);
		printf("���� ���� : ");	scanf("%d%", &p->math);
		fflush(stdin);

		p->tot = p->kor + p->eng + p->math;
		p->ave = (float)p->tot / 3;
	}

	return;
}

void  OUTPUT(SCORE  *p)
{
	int	i;

	printf("\n \t ### �л� ���� ### \n");
	for(i=0; i<MAX_SIZE; i++, p++)
		printf("%10s %3d %3d %3d %5d %8.2f \n",	
		p->name, p->kor, p->eng, p->math, p->tot, p->ave);

	return;
}

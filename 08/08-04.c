#include <stdio.h>

// ����ü�� ���� ����
typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	// ����ü�� ���� ����
	SCORE	a;

	// ����ڿ��� ������ ������ �Է� ó��
	printf("�̸� : ");	gets(a.name);
	printf("���� : ");	scanf("%d", &a.kor);
	printf("���� : ");	scanf("%d", &a.eng);
	printf("���� : ");	scanf("%d", &a.math);

		// �Էµ� 3������ �����͸� �̿��� ������ ��� ���
	a.tot = a.kor + a.eng + a.math;
	a.ave = (float)(a.kor + a.eng + a.math) / 3;

	// �� ���� ������ ���� ��� ���
	printf("\n %10s �л��� ���� ��� \n", a.name);
	printf("���� : %3d, ���� : %3d, ���� :  %3d \n", 
				a.kor, a.eng, a.math);
	printf("���� : %3d, ��� : %8.2lf \n", a.tot, a.ave);

	return 0;
}

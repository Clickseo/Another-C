#include <stdio.h>
#define MAX_SIZE 3		// �л� ��

// ����ü�� SCORE ���� ����
typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	int	i;
	SCORE	arr[MAX_SIZE];

	// 3�� ���� �л� ���� �Է� �� ������ ��� ���
	for(i=0; i<MAX_SIZE; i++)
	{
		printf("%3d��° �л� ������ �Է��Ͻÿ�...\n", i+1);
		printf("�̸� : ");	gets(arr[i].name);
		printf("���� : ");	scanf("%d", &arr[i].kor);
		printf("���� : ");	scanf("%d", &arr[i].eng);
		printf("���� : ");	scanf("%d", &arr[i].math);
					fflush(stdin);

		arr[i].tot = arr[i].kor + arr[i].eng + arr[i].math;
		arr[i].ave = (float)arr[i].tot / 3;
	}

	// 3�� ���� ���� ��� ���
	printf("\n \t ### ���� ��� ### \n");
	for(i=0; i<MAX_SIZE; i++)
		printf("%3d : %10s %3d %3d %3d %5d %8.2lf \n",
		i+1, arr[i].name, arr[i].kor, arr[i].eng,
 			arr[i].math,	arr[i].tot, arr[i].ave);

	return 0;
}

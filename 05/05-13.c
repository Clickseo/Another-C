#include <stdio.h>
#include <stdlib.h>

// �ִ� �л� ��
#define	 MAX_SIZE 10

// ������ ��� �׸��� �ִ��� ���ϴ� �Լ� ���� ����
void  GRADE(double *arr, int n, 
		double *sum, double *ave, double *max);

int main (void)
{
	int		i;
	double		arr[MAX_SIZE] = {0};
	double		sum, ave, max;

	// �ִ� �л� �� ��ŭ ���� ������ �Է�
	printf("%d ���� �л� ������ �Է��Ͻÿ�... \n", MAX_SIZE);
	for(i = 0; i < MAX_SIZE; i++)
		scanf("%lf", arr + i);

	// ������ ��� �׸��� �ִ��� ���ϴ� GRADE( ) �Լ� ȣ��
	GRADE(arr, MAX_SIZE, &sum, &ave, &max);

	// ���� ���� ��� ���
	printf("\n �迭�� �޸� ũ��: %d ����Ʈ \n\n", sizeof(arr));
	printf("�� �� ��: %d \n", MAX_SIZE);
	printf("��    ��: %.2lf \n", sum);
	printf("��    ��: %.2lf \n", ave);
	printf("�� �� ��: %.2lf \n", max);

	return 0;
}

// ������ ��� �׸��� �ִ��� ���ϴ� �Լ� ����
void  GRADE(double *p, int n, 
	double *pSum, double *pAve, double *pMax)
{
	int	i;

	*pSum  =  0;					// sum = 0;
	*pMax  =  *p;					// max = arr[0];

	// n �� �л��� ���� ������ �ִ�
	for(i = 0; i < n; i++)
	{
		*pSum += *(p+i);			// sum += arr[i];

		if(*pMax < *(p+i))			// if(max<arr[i])
			*pMax = *(p+i);
	}

	// n ���� �л��� ���� ���
	*pAve  =  *pSum  /  n;			// ave = sum / n;

	return;
}

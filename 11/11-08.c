#include <stdio.h>
#define MAX_SIZE 3
int main(void)
{
	int	i, a, b, c, tot = 0, max = 0;
	float	ave = 0.0;
	int	*arr[MAX_SIZE] = {&a, &b, &c};
	int	**pArr = arr;			// pArr = &arr[0];

	// 3���� ���� ������ �Է�
	printf("%3d���� ���� �Է� : ", MAX_SIZE);
	for(i=0; i<MAX_SIZE; i++)
		scanf("%d", *(pArr+i));

	// ������ ��� �׸��� �ִ� ���
	max = **pArr;				// max = *arr[0];
	for(i=0; i<MAX_SIZE; i++)
	{
		tot += **(pArr+i);			// tot = *arr[i];

		if(max < **(pArr+i))		// if(max < *arr[i])
			max = **(pArr+i);		// max = *arr[i];
	}

	ave = (float)(tot / MAX_SIZE);

	// ���� ��� ���
	printf("\n### ��� ��� ### \n");
	printf("��  �� : %8d \n", tot);
	printf("��  �� : %8.2f \n", ave);
	printf("�ִ� : %8d \n", max);

	return 0;
}

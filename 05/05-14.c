#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �迭�� �ִ� ���� ����
#define MAX_SIZE 5

// �Լ� ���� ����: ���� ���� �˰���, �� ���� ��ȯ �Լ� 
// �׸��� �迭 ��ü ���Ҹ� ����ϴ� �Լ�
void Selection_Sort(int *, int);
void SWAP(int *, int *);
void OUTPUT(int *, int);

int main (void)
{
	int	i, arr[MAX_SIZE] = {0};

	// ������ ������ �迭�� ����: 0 ~ 99 ������ ����
	srand(time(NULL));
	for(i = 0; i < MAX_SIZE; i++) 
		*(arr + i) = rand() % 100;

	printf("���ĵ��� ���� �迭: ");
	OUTPUT(arr, MAX_SIZE);

	// ������ ������ ������ �迭�� �����ϴ� ���� ���� �Լ� ȣ��
	Selection_Sort(arr, MAX_SIZE);

	printf("\n���ĵ� �迭: ");
	OUTPUT(arr, MAX_SIZE);

	return 0;
}

// ���� ����: ���� ���� ���� ������ ����
void   Selection_Sort(int *pArr, int n) 
{
	int	i, j, *pSm;

	for(i = 0; i < n; i++)
	{
		// i ~ n-1��° ������ ���� �� i��° ���Ҹ� �ּڰ����� ����
		pSm = pArr + i;		// pSm = &arr[i];

		// i��°���� n-1��° ���ҿ��� �ּڰ��� ��ġ(�ּ�) Ž��
		for(j = i; j < n; j++)
			if(*pSm > *(pArr + j))
				pSm = pArr + j;
		
		// ���� ���� ���� ����: ���� ���� ��ȯ
		SWAP(pSm, pArr + i);
	}

	return;
}

// �� ������ ��ȯ�ϴ� �Լ�
void  SWAP(int *pa, int *pb)
{
	int	temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

	return;
}

// n ���� �迭 ���Ҹ� ��ü ����ϴ� �Լ�
void  OUTPUT(int *pArr, int n)
{
	int	i;

	for(i = 0; i < n; i++)
		printf("%3d", *(pArr + i));
	printf("\n");

	return;
}

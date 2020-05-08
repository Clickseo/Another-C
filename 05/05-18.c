#include <stdio.h>
#define MAX_SIZE 10

int	*BinarySearch(int *, int *, int *, int);
void OUTPUT(int *pArr, int n);

int main(void)
{
	int	num, *pLoc;
	int	arr[MAX_SIZE] = { 10, 20, 30, 40, 50,
					60, 70, 80, 90, 99};

	// �迭�� ���� ������ ���
	printf("������: ");
	OUTPUT(arr, MAX_SIZE);

	while(1)
	{
		printf("\nã���� �ϴ� ������ (�˻� ����: 0): ");
		scanf("%d", &num);
		fflush(stdin);

		// ����ڰ� 0�� �Է��ϸ� �˻� ����!!!
		if(num == 0)	break;

		// ������ �˻��� ���� ���� Ž�� �Լ� ȣ��
		pLoc = BinarySearch(arr, arr, arr+MAX_SIZE-1, num);

		// Ž�� ����: BinarySearch �Լ��� ��ȯ ���� NULL
		if(pLoc == NULL)
			printf("�������� �ʴ� ������!!! \n");
		else
			printf("�˻��� ������: %d ��° ��ġ %d \n",
						num, pLoc - arr + 1);
	}

	return 0;
}

// ���� Ž��: n ���� �迭���ҿ��� num ���� �˻�
int  *BinarySearch(int *pArr, int *pBegin, int *pEnd, int num)
{
	int	*pMid, *pFirst = pBegin, *pLast = pEnd;

	// first > last �̸� �˻� ����: �˻� ����
	while(pFirst <= pLast)
	{
		// first ~ last ������ �߰� ������ ��ġ(�ּ�) ���
		pMid = pFirst + (pLast - pFirst) / 2;

		if(*pMid == num)		return  pMid;
		else if(*pMid > num)		pLast = pMid - 1;
		else if(*pMid < num)		pFirst = pMid + 1;
	}

	// �˻� ������ ��� NULL ��ȯ
	return  NULL;
}

// n ���� �迭 ���� ��ü ���
void OUTPUT(int *pArr, int n)
{
	int	i;

	for(i = 0; i < n; i++)
		printf("%3d", *(pArr + i));
	printf("\n");

	return;
}

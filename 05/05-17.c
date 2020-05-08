#include <stdio.h>
#define MAX_SIZE 10

int	*Sequential_Search(int *, int, int);
void	OUTPUT(int *, int);

int main(void)
{
	int num, *pLoc;
	int arr[MAX_SIZE]={ 89, 72, 3, 15, 21, 57, 62, 44, 19, 98};

	// �迭�� ���� ������ ���
	printf("������: ");
	OUTPUT(arr, MAX_SIZE);

	while(1)
	{
		printf("\nã���� �ϴ� ���ڴ�? (����: 0 ): ");
		scanf("%d", &num);
		fflush(stdin);

		// ����ڰ� 0�� �Է��ϸ� �˻� ����!!!
		if(num == 0)	break;

		// ���� Ž�� �Լ� ȣ��
		// ���Ұ��� MAX_SIZE�� �迭 arr���� ������ num�� �˻�
		pLoc = Sequential_Search(arr, MAX_SIZE, num);

		// Ž�� ����: Sequential_Search �Լ��� ��ȯ ���� NULL
		if(pLoc == NULL)
			printf("%3d�� �������� �ʴ� �� �Դϴ�.\n", num);
		else
			printf("�˻� ������: %3d ��° ���� %d \n", 
						pLoc - arr + 1, num);
	}
	printf("\n...�˻� ����... \n");

	return 0;
}

// ���� Ž��: n ���� �迭���ҿ��� num ���� �˻�
int  *Sequential_Search(int *pArr, int n, int num)
{
	int	i, *pLoc = NULL;

	// n ���� �迭 ���Ҹ�ŭ ���ϴ� �����͸� Ž��
	for(i = 0; i < n; i++)
	{
		// ã���� �ϴ� �����Ͱ� �����ϴ� ���...
		if(num == *(pArr + i))	// if(num == arr[i])
		{
			pLoc = pArr + i;	// pLoc = &arr[i];
			break;
		}
	}

	return  pLoc;
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

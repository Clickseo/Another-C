void  Insertion_Sort(int *pArr, int n)
{
	int	i, j, temp;

	for(i = 1; i < n; i++)
	{
		// ���� ������ �����͸� �ӽ� ���� temp�� ����
		temp = *(pArr + i);

		// ���ĵ� �������� temp �� �� ���� Ȯ��
		// ������ �����ͺ��� ū ���Ҹ� �� ĭ�� ���������� �̵�
		for(j = i - 1; j >=0  &&  *(pArr + j) > temp; j--)
			*(pArr + j + 1)  =  *(pArr + j);

		// Ȯ���� ������ ���ο� �����͸� ����
		*(pArr + j + 1)  =  temp;
	}

	return;
}

// 버블 정렬 알고리즘
void  Bubble_Sort(int *pArr, int num)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = n - 1; j > i; j --)
			if(*(pArr + j) < *(pArr + j - 1))
				SWAP(pArr + j, pArr + j - 1);
	}

	return;
}

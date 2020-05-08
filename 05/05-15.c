void  Bubble_Sort(int *pArr, int n)
{
	int	i, j;

	for(i = 0; i < n; i++)
	{
		for(j = n - 1; j > i; j --)
			if(*(pArr + j) < *(pArr + j - 1))
				SWAP(pArr + j, pArr + j - 1);
	}

	return;
}

// 삽입 정렬 알고리즘
void  Insertion_Sort(int *pArr, int num)
{
	int	temp;

	for(int i = 1; i < num; i++)
	{
		// 새로 삽입할 데이터를 임시 변수 temp에 저장
		temp = *(pArr + i);

		// 정렬된 영역에서 temp 가 들어갈 공간 확보
		// 삽입할 데이터보다 큰 원소를 한 칸씩 오른쪽으로 이동
		for(int j = i - 1; j >=0  &&  *(pArr + j) > temp; j--)
			*(pArr + j + 1)  =  *(pArr + j);

		// 확보된 공간에 새로운 데이터를 삽입
		*(pArr + j + 1)  =  temp;
	}

	return;
}

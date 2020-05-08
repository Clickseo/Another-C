#include <stdio.h>
#define MAX_SIZE 10

int	*BinarySearch(int *, int *, int *, int);
void OUTPUT(int *pArr, int n);

int main(void)
{
	int	num, *pLoc;
	int	arr[MAX_SIZE] = { 10, 20, 30, 40, 50,
					60, 70, 80, 90, 99};

	// 배열의 원본 데이터 출력
	printf("데이터: ");
	OUTPUT(arr, MAX_SIZE);

	while(1)
	{
		printf("\n찾고자 하는 데이터 (검색 종료: 0): ");
		scanf("%d", &num);
		fflush(stdin);

		// 사용자가 0을 입력하면 검색 종료!!!
		if(num == 0)	break;

		// 데이터 검색을 위한 이진 탐색 함수 호출
		pLoc = BinarySearch(arr, arr, arr+MAX_SIZE-1, num);

		// 탐색 실패: BinarySearch 함수의 반환 값이 NULL
		if(pLoc == NULL)
			printf("존재하지 않는 데이터!!! \n");
		else
			printf("검색된 데이터: %d 번째 위치 %d \n",
						num, pLoc - arr + 1);
	}

	return 0;
}

// 이진 탐색: n 개의 배열원소에서 num 값을 검색
int  *BinarySearch(int *pArr, int *pBegin, int *pEnd, int num)
{
	int	*pMid, *pFirst = pBegin, *pLast = pEnd;

	// first > last 이면 검색 종료: 검색 실패
	while(pFirst <= pLast)
	{
		// first ~ last 사이의 중간 원소의 위치(주소) 계산
		pMid = pFirst + (pLast - pFirst) / 2;

		if(*pMid == num)		return  pMid;
		else if(*pMid > num)		pLast = pMid - 1;
		else if(*pMid < num)		pFirst = pMid + 1;
	}

	// 검색 실패할 경우 NULL 반환
	return  NULL;
}

// n 개의 배열 원소 전체 출력
void OUTPUT(int *pArr, int n)
{
	int	i;

	for(i = 0; i < n; i++)
		printf("%3d", *(pArr + i));
	printf("\n");

	return;
}

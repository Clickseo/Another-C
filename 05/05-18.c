// 이진 탐색 알고리즘
//	1) 정렬된 데이터에 대하여 탐색 수행
//	2) 중복된 데이터가 존재하지 않을 경우 탐색 수행
#include <stdio.h>
#include <stdbool.h>	// bool, true, false

#define arrMAXSIZE 10

// 함수 원형 선언
int	*binarySearch(int *, int *, int *, int);	// 1) 이진 탐색 알고리즘
void 	OUTPUT(int *pArr, int num);			// 2) 전체 배열 출력

int main(void)
{
	int	num, *pLoc;
	int	arr[arrMAXSIZE] = { 10, 20, 30, 40, 50,	60, 70, 80, 90, 99};

	// 원본 데이터 출력
	printf("데이터 : ");
	OUTPUT(arr, arrMAXSIZE);

	while(true)
	{
		printf("\n찾고자 하는 데이터 (검색 종료: 0): ");
		scanf_s("%d", &num);		// scanf("%d", &num);

		// 사용자가 0 을 입력하면 검색 종료!!!
		if(num == 0)
			break;

		// 함수 호출 : 데이터 검색을 위한 이진 탐색 함수
		pLoc = binarySearch(arr, arr, arr+arrMAXSIZE-1, num);

		// 탐색 실패 : BinarySearch 함수의 반환 값이 NULL
		if(pLoc == NULL)	printf("존재하지 않는 데이터!!! \n");
		else			printf("검색된 데이터: %d 번째 위치 %d \n", num, pLoc - arr + 1);
	}

	return 0;
}

// 이진 탐색 알고리즘: pBegin ~ pEnd 사이의 배열 원소들 중에서 key 값을 검색
int  *binarySearch(int *pArr, int *pBegin, int *pEnd, int key) {	
	int*	pFirst = pBegin;
	int*	pLast = pEnd;
	int*	pMid;
	while(pFirst <= pLast)	{			// first > last 이면 검색 종료: 검색 실패		
		pMid = pFirst + (pLast-pFirst) / 2;	// first ~ last 사이의 중간 원소의 위치(주소) 계산

		if(*pMid == key)		return  pMid;
		else if(*pMid > key)		pLast = pMid - 1;
		else if(*pMid < key)		pFirst = pMid + 1;
	}

	// 검색 실패할 경우 NULL 값 반환
	return  NULL;
}

// 배열 전체 원소(데이터) 출력
void OUTPUT(int *pArr, int num) {
	for(int i=0; i<num; i++)
		printf("%3d", *(pArr+i));
	printf("\n");
	return;
}

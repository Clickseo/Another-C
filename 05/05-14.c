#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 배열의 최대 원소 개수
#define MAX_SIZE 5

// 함수 원형 선언: 선택 정렬 알고리즘, 두 정수 교환 함수 
// 그리고 배열 전체 원소를 출력하는 함수
void Selection_Sort(int *, int);
void SWAP(int *, int *);
void OUTPUT(int *, int);

int main (void)
{
	int	i, arr[MAX_SIZE] = {0};

	// 임의의 난수를 배열에 저장: 0 ~ 99 사이의 정수
	srand(time(NULL));
	for(i = 0; i < MAX_SIZE; i++) 
		*(arr + i) = rand() % 100;

	printf("정렬되지 않은 배열: ");
	OUTPUT(arr, MAX_SIZE);

	// 임의의 순서로 구성된 배열을 정렬하는 선택 정렬 함수 호출
	Selection_Sort(arr, MAX_SIZE);

	printf("\n정렬된 배열: ");
	OUTPUT(arr, MAX_SIZE);

	return 0;
}

// 선택 정렬: 가장 작은 값을 앞으로 보냄
void   Selection_Sort(int *pArr, int n) 
{
	int	i, j, *pSm;

	for(i = 0; i < n; i++)
	{
		// i ~ n-1번째 사이의 원소 중 i번째 원소를 최솟값으로 가정
		pSm = pArr + i;		// pSm = &arr[i];

		// i번째부터 n-1번째 원소에서 최솟값의 위치(주소) 탐색
		for(j = i; j < n; j++)
			if(*pSm > *(pArr + j))
				pSm = pArr + j;
		
		// 가장 작은 값을 선택: 현재 값과 교환
		SWAP(pSm, pArr + i);
	}

	return;
}

// 두 정수를 교환하는 함수
void  SWAP(int *pa, int *pb)
{
	int	temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

	return;
}

// n 개의 배열 원소를 전체 출력하는 함수
void  OUTPUT(int *pArr, int n)
{
	int	i;

	for(i = 0; i < n; i++)
		printf("%3d", *(pArr + i));
	printf("\n");

	return;
}

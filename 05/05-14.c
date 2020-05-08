#include <stdio.h>
#include <stdlib.h>		// rand, srand
#include <time.h>

// 배열의 최대 원소 개수
#define MAX_SIZE 5

// 함수 원형 선언
void Selection_Sort(int *, int);	// 1) 선택 정렬 알고리즘 함수
void SWAP(int *, int *);		// 2) 원소 교환 함수
void OUTPUT(int *, int);		// 3) 전체 배열 원소 출력 함수

int main (void)
{
	int	arr[MAX_SIZE] = {0};

	// 임의의 난수를 배열에 저장 : 0 ~ 99 사이의 정수
	srand(time(NULL));
	for(int i = 0; i < MAX_SIZE; i++) 
		*(arr + i) = rand() % 100;

	printf("정렬되지 않은 배열: ");
	OUTPUT(arr, MAX_SIZE);

	// 함수 호출 : 임의의 순서로 구성된 배열을 정렬(선택 정렬 함수)
	Selection_Sort(arr, MAX_SIZE);

	printf("\n정렬 된 배열: ");
	OUTPUT(arr, MAX_SIZE);

	return 0;
}

// 선택 정렬 : 가장 작은 값을 앞으로 보냄
void   Selection_Sort(int *pArr, int num) 
{
	int	*pSm;
	for(int i = 0; i < num; i++)
	{
		// i ~ n-1 번째 사이의 원소 중 i 번째 원소를 최소값으로 가정
		pSm = pArr + i;		// pSm = &arr[i];

		// i 번째부터 n-1 번째 원소에서 최소값의 위치(주소) 탐색
		for(int j = i; j < n; j++)
			if(*pSm > *(pArr + j))
				pSm = pArr + j;
		
		// 가장 작은 값을 선택 : 현재 값과 교환
		SWAP(pSm, pArr + i);
	}

	return;
}

// 원소 교환 : 두 정수를 교환하는 함수
void  SWAP(int *pa, int *pb)
{
	int	temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

	return;
}

// 전체 배열 원소 출력 : num 개의 배열 원소를 전체 출력하는 함수
void  OUTPUT(int *pArr, int num)
{
	for(int i = 0; i < n; i++)
		printf("%3d", *(pArr + i));
	printf("\n");

	return;
}

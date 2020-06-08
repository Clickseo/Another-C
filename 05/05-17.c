// 순차 탐색 알고리즘
#include <stdio.h>
#include <stdbool.h>		// bool, true, false

#define arrMAXSIZE 10

// 함수 원형 선언
int	*sequentialSearch(int *, int, int);	// 1) 순차 탐색 알고리즘
void	OUTPUT(int *, int);			// 2) 전체 배열 원소 출력

int main(void)
{
	int num, *pLoc;
	int arr[arrMAXSIZE]={ 89, 72, 3, 15, 21, 57, 62, 44, 19, 98 };

	// 원본 데이터 출력
	printf("데이터 : ");
	OUTPUT(arr, arrMAXSIZE);

	while(true)
	{
		printf("\n찾고자 하는 숫자는? (종료: 0 ): ");
		scanf_s("%d", &num);

		// 사용자가 0을 입력하면 검색 종료!!!
		if(num == 0)	break;

		// 함수 호출: 순차 탐색
		// 배열 원소의 크기가 arrMAXSIZE인 배열 arr에서 데이터 num을 검색
		pLoc = sequentialSearch(arr, arrMAXSIZE, num);

		// 탐색 실패: Sequential_Search 함수의 반환 값이 NULL
		if(pLoc == NULL)	printf("%3d는 존재하지 않는 수 입니다.\n", num);
		else			printf("검색 데이터: %3d 번째 원소 %d \n", pLoc-arr+1, num);
	}
	printf("\n...검색 종료... \n");

	return 0;
}

// 순차 탐색: num 개의 배열 원소에서 key 값을 검색
int  *sequentialSearch(int *pArr, int num, int key) {
	int*	pLoc = NULL;

	// num 개의 배열 원소만큼 원하는 데이터를 탐색
	for(int i=0; i<num; i++) {
		// 찾고자 하는 데이터가 존재하는 경우...
		// if(num == arr[i])
		if(key == *(pArr+i)) {
			pLoc = pArr+i;		// pLoc = &arr[i];
			break;
		}
	}
	return  pLoc;
}

// 배열 전체 원소 출력
void OUTPUT(int *pArr, int num) {
	for(int i=0; i<num; i++)
		printf("%3d", *(pArr+i));
	printf("\n");
	return;
}

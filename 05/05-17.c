#include <stdio.h>
#define MAX_SIZE 10

// 함수 원형 선언
int	*Sequential_Search(int *, int, int);	// 1) 순차 탐색 알고리즘
void	OUTPUT(int *, int);			// 2) 전체 배열 원소 출력

int main(void)
{
	int num, *pLoc;
	int arr[MAX_SIZE]={ 89, 72, 3, 15, 21, 57, 62, 44, 19, 98 };

	// 배열의 원본 데이터 출력
	printf("데이터 : ");
	OUTPUT(arr, MAX_SIZE);

	while(1)
	{
		printf("\n찾고자 하는 숫자는? (종료: 0 ): ");
		scanf("%d", &num);
		fflush(stdin);

		// 사용자가 0을 입력하면 검색 종료!!!
		if(num == 0)	break;

		// 순차 탐색 함수 호출
		// 원소개수 MAX_SIZE인 배열 arr에서 데이터 num을 검색
		pLoc = Sequential_Search(arr, MAX_SIZE, num);

		// 탐색 실패: Sequential_Search 함수의 반환 값이 NULL
		if(pLoc == NULL)
			printf("%3d는 존재하지 않는 수 입니다.\n", num);
		else
			printf("검색 데이터: %3d 번째 원소 %d \n", 
						pLoc - arr + 1, num);
	}
	printf("\n...검색 종료... \n");

	return 0;
}

// 순차 탐색 : num 개의 배열원소에서 num 값을 검색
int  *Sequential_Search(int *pArr, int num, int key)
{
	int	*pLoc = NULL;

	// n 개의 배열 원소만큼 원하는 데이터를 탐색
	for(int i = 0; i < num; i++)
	{
		// 찾고자 하는 데이터가 존재하는 경우...
		if(key == *(pArr + i))		// if(num == arr[i])
		{
			pLoc = pArr + i;	// pLoc = &arr[i];
			break;
		}
	}

	return  pLoc;
}

// 배열 원소 전체 출력
void OUTPUT(int *pArr, int num)
{
	for(int i = 0; i < n; i++)
		printf("%3d", *(pArr + i));
	printf("\n");

	return;
}

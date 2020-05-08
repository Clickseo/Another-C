#include <stdio.h>
#define MAX_SIZE 3
int main(void)
{
	int	i, a, b, c, tot = 0, max = 0;
	float	ave = 0.0;
	int	*arr[MAX_SIZE] = {&a, &b, &c};
	int	**pArr = arr;			// pArr = &arr[0];

	// 3개의 정수 데이터 입력
	printf("%3d개의 정수 입력 : ", MAX_SIZE);
	for(i=0; i<MAX_SIZE; i++)
		scanf("%d", *(pArr+i));

	// 총점과 평균 그리고 최댓값 계산
	max = **pArr;				// max = *arr[0];
	for(i=0; i<MAX_SIZE; i++)
	{
		tot += **(pArr+i);			// tot = *arr[i];

		if(max < **(pArr+i))		// if(max < *arr[i])
			max = **(pArr+i);		// max = *arr[i];
	}

	ave = (float)(tot / MAX_SIZE);

	// 최종 결과 출력
	printf("\n### 결과 출력 ### \n");
	printf("총  점 : %8d \n", tot);
	printf("평  균 : %8.2f \n", ave);
	printf("최댓값 : %8d \n", max);

	return 0;
}

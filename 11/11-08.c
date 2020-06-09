#include <stdio.h>

#define arrMAXSIZE 3

int main(void)
{
	int	a, b, c, tot = 0, max = 0;
	double	ave = 0.0;
	
	int	*arr[arrMAXSIZE] = { &a, &b, &c };	// 포인터 배열
	int	**pArr = arr;				// pArr = &arr[0];

	// 3개의 정수 데이터 입력
	printf("%3d개의 정수 입력 : ", arrMAXSIZE);
	for(int i=0; i<arrMAXSIZE; i++)
		scanf_s("%d", *(pArr+i));		// scanf_s("%d", arr[i]);

	// 총점과 평균 그리고 최댓값 계산
	max = **pArr;					// max = *arr[0];
	for(int i=0; i<arrMAXSIZE; i++) {
		tot += **(pArr+i);			// tot = *arr[i];
		if(max < **(pArr+i))			// if(max < *arr[i])
			max = **(pArr+i);		// 	max = *arr[i];
	}
	ave = (float)(tot / arrMAXSIZE);

	// 최종 성적 결과 출력
	printf("\n### 성적 결과 출력 ### \n");
	printf("총  점 : %8d \n", tot);
	printf("평  균 : %8.2f \n", ave);
	printf("최대값 : %8d \n", max);

	return 0;
}

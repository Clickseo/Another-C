#include <stdio.h>

// 최대 학생의 수
#define MAX_SIZE 10

int main(void)
{
	// 배열 선언 : 학생 성적을 저장할 메모리 공간 확보
	int	arr[MAX_SIZE], sum, max;
	double	ave;

	// 10명의 성적 데이터 입력
	printf("%d개의 배열 원소를 입력하시오!!! \n", MAX_SIZE);
	for(int i = 0; i < MAX_SIZE ; i++)
	{
		printf("arr[%d]: ", i);
		scanf_s("%d", &arr[i]);		// scanf("%d", &arr[i]);
	}

	// 총점과 평균 그리고 최댓값 계산
	sum  =  0;
	max  =  arr[0];
	for(int i=0;  i<MAX_SIZE;  i++)
	{
		sum  +=  arr[i];
		if(max  <  arr[i])
			max  =  arr[i];
	}

	ave  =  (double) sum  /  MAX_SIZE;

	// 계산된 결과 출력
	printf("\n 총점: %d, 평균: %.2lf, 최댓값: %d \n", sum, ave, max);

	return 0;
}

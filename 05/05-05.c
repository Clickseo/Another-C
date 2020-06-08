// 배열을 이용하여 10명의 학생 성적에 대한 촏점, 평균 그리괴 최대값 계산
#include <stdio.h>

// 배열의 원소 개수(즉, 학생 수)
#define arrMAXSIZE 10

int main(void)
{
	// 배열 선언: 학생의 성적 데이터를 저장할 메모리 공간 확보
	int	arr[arrMAXSIZE], sum, max;
	double	ave;

	// 10명의 학생에 대한 성적 데이터 입력 처리
	printf("%d개의 배열 원소를 입력하시오!!! \n", arrMAXSIZE);
	for(int i=0; i<arrMAXSIZE ; i++) {
		printf("arr[%d]: ", i);
		scanf_s("%d", &arr[i]);		// scanf("%d", &arr[i]);
	}

	// 학생의 성적 계산: 총점과 평균 그리고 최대값 계산
	sum  =  0;
	max  =  arr[0];
	for(int i=0; i<arrMAXSIZE; i++)	{
		sum  +=  arr[i];
		if(max  <  arr[i])
			max  =  arr[i];
	}
	ave  =  (double) sum  /  arrMAXSIZE;

	// 학생 성적 출력: 총점, 평균 그리고 최대값
	printf("\n 총점: %d, 평균: %.2lf, 최대값: %d \n", sum, ave, max);

	return 0;
}

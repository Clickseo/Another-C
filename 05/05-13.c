#include <stdio.h>
#include <stdlib.h>

// 최대 학생 수
#define	 MAX_SIZE 10

// 총점과 평균 그리고 최댓값을 구하는 함수 원형 선언
void  GRADE(double *arr, int n, 
		double *sum, double *ave, double *max);

int main (void)
{
	int		i;
	double		arr[MAX_SIZE] = {0};
	double		sum, ave, max;

	// 최대 학생 수 만큼 성적 데이터 입력
	printf("%d 명의 학생 점수를 입력하시오... \n", MAX_SIZE);
	for(i = 0; i < MAX_SIZE; i++)
		scanf("%lf", arr + i);

	// 총점과 평균 그리고 최댓값을 구하는 GRADE( ) 함수 호출
	GRADE(arr, MAX_SIZE, &sum, &ave, &max);

	// 계산된 성적 결과 출력
	printf("\n 배열의 메모리 크기: %d 바이트 \n\n", sizeof(arr));
	printf("학 생 수: %d \n", MAX_SIZE);
	printf("총    합: %.2lf \n", sum);
	printf("평    균: %.2lf \n", ave);
	printf("최 대 값: %.2lf \n", max);

	return 0;
}

// 총점과 평균 그리고 최댓값을 구하는 함수 정의
void  GRADE(double *p, int n, 
	double *pSum, double *pAve, double *pMax)
{
	int	i;

	*pSum  =  0;					// sum = 0;
	*pMax  =  *p;					// max = arr[0];

	// n 명에 학생에 대한 총점과 최댓값
	for(i = 0; i < n; i++)
	{
		*pSum += *(p+i);			// sum += arr[i];

		if(*pMax < *(p+i))			// if(max<arr[i])
			*pMax = *(p+i);
	}

	// n 명의 학생에 대한 평균
	*pAve  =  *pSum  /  n;			// ave = sum / n;

	return;
}

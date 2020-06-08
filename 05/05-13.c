// 배열과 포인터 그리고 함수: 학생 성적(총점, 평균, 최대값) 처리
#include <stdio.h>

// 배열의 크기(원소 개수): 학생 수
#define	 arrMAXSIZE 10

// 함수 원형: 총점과 평균 그리고 최대값을 구하는 함수
void  GRADE(double *pArr, int num, double *pSum, double *pAve, double *pMax);

int main (void)
{
	double		arr[arrMAXSIZE] = {0};
	double		sum, ave, max;

	// 최대 학생 수 만큼 성적 데이터 입력
	printf("%d 명의 학생 점수를 입력하시오... \n", arrMAXSIZE);
	for(int i = 0; i < arrMAXSIZE; i++)
		scanf_s("%lf", arr+i);		// scanf("%lf", arr+i);

	// 함수 호출: 총점과 평균 그리고 최값을 구하는 GRADE 함수
	GRADE(arr, arrMAXSIZE, &sum, &ave, &max);

	// 결과 출력: 성적 결과
	printf("\n 배열의 메모리 크기: %d 바이트 \n\n", sizeof(arr));
	printf("학 생 수: %d \n", arrMAXSIZE);
	printf("총    점: %.2lf \n", sum);
	printf("평    균: %.2lf \n", ave);
	printf("최 대 값: %.2lf \n", max);

	return 0;
}

// 함수 정의: 총점과 평균 그리고 최대값을 구하는 GRADE 함수
void  GRADE(double *pArr, int num, double *pSum, double *pAve, double *pMax) {
	*pSum  =  0;					// sum = 0;
	*pMax  =  *pArr;				// max = arr[0];

	// num 명의 학생에 대한 총점과 최대값 계산
	for(int i = 0; i < num; i++) {
		*pSum += *(pArr+i);			// sum += arr[i];
		if(*pMax < *(pArr+i))			// if(max<arr[i])
			*pMax = *(pArr+i);
	}

	// num 명의 학생에 대한 평균 계산
	*pAve  =  *pSum / num;				// ave = sum / num;

	return;
}

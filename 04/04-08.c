#include <stdio.h>

// 함수 원형 선언: MAX 함수
int	MAX(int, int, int, int);

int main(void)
{
	int	a, b, c, d, max;

	printf("4개의 정수 입력 : ");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);	// scanf("%d %d %d %d", &a, &b, &c, &d);

	// 함수 호출: MAX 함수 -- 4개의 정수 중 최댓값 계산
	max = MAX(a, b, c, d);

	printf("최댓값: %d \n", max);

	return 0;
}

// 함수 정의: MAX 함수 -- 전달(입력)받은 4개의 정수 중에서 최댓값 반환
int	MAX(int a, int b, int c, int d) {
	int	max;

	// 4개의 정수 중에서 최대값을 구하는 부분
	if(a > b)	max = a;
	else		max = b;

	if(c > max)	max = c;
	if(d > max)	max = d;

	// 최종 결과를 호출 함수(main 함수)에 반환
	return max;
}

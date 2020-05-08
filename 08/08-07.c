#include <stdio.h>
#define MAX_SIZE 3		// 학생 수

// 구조체형 SCORE 형식 정의
typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	int	i;
	SCORE	arr[MAX_SIZE];

	// 3명에 대한 학생 성적 입력 및 총점과 평균 계산
	for(i=0; i<MAX_SIZE; i++)
	{
		printf("%3d번째 학생 성적을 입력하시오...\n", i+1);
		printf("이름 : ");	gets(arr[i].name);
		printf("국어 : ");	scanf("%d", &arr[i].kor);
		printf("영어 : ");	scanf("%d", &arr[i].eng);
		printf("수학 : ");	scanf("%d", &arr[i].math);
					fflush(stdin);

		arr[i].tot = arr[i].kor + arr[i].eng + arr[i].math;
		arr[i].ave = (float)arr[i].tot / 3;
	}

	// 3명에 대한 성적 결과 출력
	printf("\n \t ### 성적 결과 ### \n");
	for(i=0; i<MAX_SIZE; i++)
		printf("%3d : %10s %3d %3d %3d %5d %8.2lf \n",
		i+1, arr[i].name, arr[i].kor, arr[i].eng,
 			arr[i].math,	arr[i].tot, arr[i].ave);

	return 0;
}

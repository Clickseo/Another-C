// 구조체 배열
#include <stdio.h>
#define arrMAXSIZE 3	// 학생 수

// 구조체 형식 정의
typedef struct _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
} SCORE;

int main(void)
{
	// 구조체 배열
	SCORE	arr[arrMAXSIZE];	// SCORE	a, b, c;

	for (int i = 0; i < arrMAXSIZE; i++)	{
		printf("%3d번째 학생 성적을 입력하세요.\n", i + 1);
		printf("이름: ");	gets_s(arr[i].name, sizeof(arr[i].name));	// gets(arr[i].name);
		printf("국어: ");	scanf_s("%d", &arr[i].kor);			// scanf("%d", &arr[i].kor);
		printf("영어: ");	scanf_s("%d", &arr[i].eng);			// scanf("%d", &arr[i].eng);
		printf("수학: ");	scanf_s("%d%*c", &arr[i].math);			// scanf("%d", &arr[i].math);

		arr[i].tot = arr[i].kor + arr[i].eng + arr[i].math;
		arr[i].ave = (float)arr[i].tot / 3;
	}

	printf("\n \t ### 성적 결과 ### \n");
	for (int i = 0; i < arrMAXSIZE; i++)
		printf("%3d : %10s %3d %3d %3d %5d %8.2lf \n",
			i + 1, arr[i].name, arr[i].kor, arr[i].eng, arr[i].math, arr[i].tot, arr[i].ave);

	return 0;
}

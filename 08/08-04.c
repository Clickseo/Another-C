// 구조체 형식 정의 및 선언: 형식(재) 정의된 구조체(Type-Defined Structure)
#include <stdio.h>

// 형식(재) 정의된 구조체
typedef struct _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;

int main(void)
{
	// 구조체 변수 선언
	// struct _score	temp;
	SCORE			temp;

	printf("이름 : ");	gets_s(temp.name, sizeof(temp.name));	// gets(temp.name);
	printf("국어 : ");	scanf_s("%d", &temp.kor);		// scanf("%d", &temp.kor);
	printf("영어 : ");	scanf_s("%d", &temp.eng);		// scanf("%d", &temp.eng);
	printf("수학 : ");	scanf_s("%d", &temp.math);		// scanf("%d", &temp.math);

	temp.tot = temp.kor + temp.eng + temp.math;
	temp.ave = (float)(s.kor + temp.eng + temp.math) / 3;

	printf("\n %10s 학생의 성적 결과 \n", temp.name);
	printf("국어: %3d, 영어: %3d, 수학:  %3d \n", temp.kor, temp.eng, temp.math);
	printf("총점: %3d, 평균: %8.2lf \n", temp.tot, temp.ave);

	return 0;
}

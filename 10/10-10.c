#define TRUE 1
#define FALSE 0

// 구조체 형식 정의: 학생 성적
#ifndef __SCORE_H_
typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;
#define __SCORE_H_
#endif

// 함수 원형 정의
void INPUT(void);
void OUTPUT(void);
int MENU(void);

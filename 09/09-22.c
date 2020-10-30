// 헤더 파일: score.h

#ifndef stuMAXSIZE
	#define stuMAXSIZE 3
#endif

// 조건 컴파일: _SCORE_H_ 매크로의 정의 여부에 따른 매크로 정의
#ifndef _SCORE_H_
#define _SCORE_H_
typedef  struct  _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
} SCORE;
#endif

// 함수 원형: 학생 성적 입출력 함수
void	INPUT(SCORE *pArr, int num);
void	OUTPUT(SCORE *pArr, int num);

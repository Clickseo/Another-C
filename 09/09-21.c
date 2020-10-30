// 헤더 파일: score.h

// 매크로 상수: 학생 수
#define stuMAXSIZE 3

// 형식(재) 정의된 구조체: SCORE
typedef  struct  _score {
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
} SCORE;

// 함수 원형: 학생 정보 입출력 함수
void	INPUT(SCORE *pArr, int num);
void	OUTPUT(SCORE *pArr, int num);

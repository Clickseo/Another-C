#define TRUE 1
#define FALSE 0

// ����ü ���� ����: �л� ����
#ifndef __SCORE_H_
typedef struct _score
{
	char	name[12];
	int	kor, eng, math, tot;
	float	ave;
}SCORE;
#define __SCORE_H_
#endif

// �Լ� ���� ����
void INPUT(void);
void OUTPUT(void);
int MENU(void);

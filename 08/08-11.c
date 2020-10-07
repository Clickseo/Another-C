// 구조체형 변수 선언 및 정의
#include <stdio.h>

// 형식(재) 정의된 구조체: POINT
typedef struct _point {
	int x;
	int y;
}POINT;

int main(void)
{
	// 구조체형 변수 선언 및 초기화
	struct _point	a = { 10, 20 };
	POINT			*pS = &a;

	a.x = 10;
	a->x = 10;		// Error
	pS->x = 10;
	(*pS).x = 10;
	pS.x = 10;		// Error

	return 0;
}

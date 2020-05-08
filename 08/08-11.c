#include <stdio.h>

typedef struct _point
{
	int x;
	int y;
}POINT;

int main(void)
{
	struct _point a = {10, 20};

	POINT *p = &a;

	a.x = 10;
	a->x = 10;
	p->x = 10;
	(*p).x = 10;
	p.x = 10;

	return 0;
}

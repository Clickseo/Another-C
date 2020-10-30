#include <stdio.h>
#include <conio.h>	// _getch

// 기능 키
#define F1		59
#define F2		60
#define F3		61
#define F4		62
#define F5		63
#define F6		64
#define F7		65
#define F8		66
#define F9		67
#define F10		68

// 방향키
#define UP		72
#define DOWN		80
#define LEFT		75
#define RIGHT		77

// 특수 키
#define ESC		27
#define ENTER		13
#define SPACE		32
#define BACKSPACE	8

#define INSERT		82
#define DELETE		83

#define HOME		71
#define END		79

#define PAGEUP		73
#define PAGEDOWN	81

int main(void)
{
	int	ch;
	while ((ch = _getch()) != ESC)	{
		// 특수 키라면 두 번째 상위 바이트 값을 읽어온다.
		if (ch == 0 || ch == 224 || ch == -32)
			ch = _getch();

		printf("입력된 키: %d \t", ch);
		switch (ch)	{
			case LEFT:	printf("왼쪽 방향키\n");	break;
			case RIGHT:	printf("오른쪽 방향키\n");	break;
			case UP:	printf("위쪽 방향키\n");	break;
			case DOWN:	printf("아래쪽 방향키\n");	break;
			default: printf("나머지 키...\n");
		}
	}

	return 0;
}

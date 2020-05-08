#include <stdio.h>
#include <conio.h>

// ��� Ű
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

// ����Ű
#define UP		72
#define DOWN		80
#define LEFT		75
#define RIGHT	77

// Ư�� Ű
#define ESC		27
#define ENTER	13 
#define SPACE	32
#define BACKSPACE	8

#define INSERT	82
#define DELETE	83

#define HOME		71
#define END		79
 
#define PAGEUP	73 
#define PAGEDOWN	81

int main(void)
{
	int		ch;
	
	while((ch = getch()) != ESC)
	{
		if(ch == 0 || ch == 224 || ch == -32) 
			ch = getch();
		
		printf("�Էµ� Ű ��: %d \t", ch);
		switch(ch)
		{
			case LEFT	:	printf("���� ����Ű\n");
				break;
			case RIGHT	:	printf("������ ����Ű\n");
				break;
			case UP	:	printf("���� ����Ű\n");
				break;
			case DOWN	:	printf("�Ʒ��� ����Ű\n");
				break;
			default : printf("������ Ű...\n");
		}
	}

	return 0;
}

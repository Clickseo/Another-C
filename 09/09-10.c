#include <stdio.h>

#define  ADD(a, b)	((a)  +  (b))
#define  SUB(a, b)	((a)  -  (b))
#define  MUL(a, b)	((a)  *  (b))
#define  DIV(a, b)	((a)  /  (b))

#define  MAX(a, b)	 (((a) > (b))  ?  (a)  :  (b))
#define  MIN(a, b)	(((a) < (b))  ?  (a)  :  (b))

#define  ABS(a)		(((a) > 0)  ?  (a)  :  -(a))

int main(void)
{
	int		a, b;

	printf("�� ���� �Է�: ");
	scanf("%d %d", &a, &b);

	// ��ũ�� �Լ��� �̿��� ��Ģ����
	printf("��  �� ����: %d \n", ADD(a, b) );
	printf("������ ����: %d \n", SUB(a, b) );
	printf("��  �� ����: %d \n", MUL(a, b) );
	printf("������ ����: %d \n\n", DIV(a, b) );

	// ��ũ�� �Լ��� �̿��� �ִ밪�� �ּҰ�
	printf("�ִ�: %d \n", MAX(a, b) );
	printf("�ּڰ�: %d \n\n", MIN(a, b) );

	// ��ũ�� �Լ��� �̿��� ���밪
	printf("���� a�� ����: %d \n", ABS(a) );
	printf("���� b�� ����: %d \n\n", ABS(b) );

	return 0;
}

#include <stdio.h>

int ADD(int, int);
int SUB(int, int);
int MUL(int, int);
int DIV(int, int);

void OUTPUT(int (*)(int, int));

int main(void)
{
	int		num;

	printf("### »çÄ¢¿¬»ê ### \n\n");
	printf("1) µ¡  ¼À ¿¬»ê \n");
	printf("2) »¬  ¼À ¿¬»ê \n");
	printf("3) °ö  ¼À ¿¬»ê \n");
	printf("4) ³ª´°¼À ¿¬»ê \n\n");

	printf("¿¬»êÀÇ Á¾·ù ¼±ÅÃ : ");
	scanf("%d", &num);

	switch(num)
	{
		case 1: OUTPUT(ADD);		break;
		case 2: OUTPUT(SUB);		break;
		case 3: OUTPUT(MUL);		break;
		case 4: OUTPUT(DIV);		break;
		default: printf("Àß¸øµÈ ¼±ÅÃ!!! \n");
			  return 0;
	}

	return 0;
}

void OUTPUT(int (*p)(int, int))
{
	int		a = 10, b = 20;

	printf("¿¬»ê °á°ú : %d \n", p(a, b));
}

int ADD(int a, int b)	{	return a + b;	}
int SUB(int a, int b)	{	return a - b;	}
int MUL(int a, int b)	{	return a * b;	}
int DIV(int a, int b)	{	return a / b;	}

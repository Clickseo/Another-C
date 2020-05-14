#include <stdio.h>
int main(void)
{
	char	ch = 'a' - 32;					// char	ch = 'A';
	for(int i = 1; ch <= ('z' - 32); ch++, i++)		// ('z' - 32) == 'Z'
	{
		if(i%5)	printf("%3c : %3d \t", ch, ch);
		else	printf("%3c : %3d \n", ch, ch);
	}
	printf("\n");

	return 0;
}

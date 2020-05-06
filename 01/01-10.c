#include <stdio.h>
int main(void)
{
	char	ch;
	int	i;

	for(i = 1, ch = 97; ch <= 122; ch++, i++)
	{
		if(i%5)	printf("%3c : %3d \t", ch, ch);
		else		printf("%3c : %3d \n", ch, ch);
	}
	printf("\n");

	return 0;
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str1[] = "Hi~ Clickseo";
	char	str2[] = "abcd";
	char	*pos = NULL;	

	pos = strpbrk(str1, str2);

	if(pos != NULL)
		printf("pos : %p, %c, %s \n", pos, *pos, pos);

	return 0;
}

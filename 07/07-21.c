#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str[] = "¼­µÎ¿Á 70 80 90 240 80.0";
	char	*p = NULL;

	printf("str : %p %s \n\n", str, str);

	p = strtok(str, " ");

	while(p != NULL)
	{
		printf("%p : %s \n", p, p);
		p = strtok(NULL, " ");
	}

	return 0;
}

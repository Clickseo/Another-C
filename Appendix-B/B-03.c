#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char *p, str[] = "Hi~ Clickseo";

	puts(str);

	for(p = str; p < str + strlen(str); p++)
	{
		if(islower(*p))			putchar(toupper(*p));
		else if(isupper(*p))		putchar(tolower(*p));
		else					putchar(*p);
	}
	printf("\n");

	return 0;
}

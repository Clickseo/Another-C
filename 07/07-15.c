#include <stdio.h>
#include <string.h>
int main(void)
{
	int	res;
	char	str1[20] = "Hello World!!!";
	char	str2[20] = "Hello Clickseo!!!";

	res = strncmp(str1, str2, 5);	// ¹ÝÈ¯°ª : 0

	printf("res : %d \n", res);

	return 0;
}

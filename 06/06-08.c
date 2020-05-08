#include <stdio.h>
#define MAX_SIZE 1024
int main(void)
{
	char	name[] = "¼­µÎ¿Á";
	int	kor = 70, eng = 80, math =90, tot;
	double	ave;
	char	str[MAX_SIZE];

	tot = kor + eng + math;
	ave = (kor + eng + math) / 3.0;

	sprintf(str, "%10s %3d %3d %3d %5d %8.2f", 
				name, kor, eng, math, tot, ave);
	printf("str : %s \n", str);

	return 0;
}

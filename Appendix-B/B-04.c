#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t	start, end;
	int		i = 0;
	double		time;

	start = clock();
	while(i < 30000000)
		i++;
	end = clock();

	time = (double)(end - start) / CLK_TCK;

	printf("수행 시간: %lf\n", time );

	return 0;
}

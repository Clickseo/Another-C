#include <stdio.h>
int main(void)
{
	char	str[] = "���ο� 70 80 90 240 80.0";

	char	name[12];
	int	kor, eng, math, tot;
	double	ave;

	sscanf(str, "%s %d %d %d %d %lf", 
			name, &kor, &eng, &math, &tot, &ave);

	printf("�̸�: %5s \n", name);
	printf("����: %5d \n", kor);
	printf("����: %5d \n", eng);
	printf("����: %5d \n", math);
	printf("����: %5d \n", tot);
	printf("���: %5.2lf \n", ave);

	return 0;
}

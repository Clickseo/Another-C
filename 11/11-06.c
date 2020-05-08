#include <stdio.h>
#define MAX_SIZE 3
int main(void)
{
	int	i, a, b, c;
	int	*arr[MAX_SIZE] = {&a, &b, &c};

	printf("%3d개의 정수 입력 : ", MAX_SIZE);
	for(i=0; i<MAX_SIZE; i++)
		scanf("%d", *(arr+i));

	printf("\n### 결과 출력 ### \n");
	for(i=0; i<MAX_SIZE; i++)
		printf("%d \n", **(arr+i));

	return 0;
}

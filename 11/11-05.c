// 포인터 배열
#include <stdio.h>
int main(void)
{
	int		a, b, c;
	int		*arr[3];		// 포인터 배열

	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;

	printf("3개의 정수 입력: ");
	scanf_s("%d", arr[0]);			// scanf_s("%d", &a);
	scanf_s("%d", arr[1]);			// scanf_s("%d", &b);
	scanf_s("%d", arr[2]);			// scanf_s("%d", &c);

	printf("a : %d \n", *arr[0]);
	printf("b : %d \n", *arr[1]);
	printf("c : %d \n", *arr[2]);

	return 0;
}

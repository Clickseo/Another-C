#include <stdio.h>
int main(void)
{
	int		a, b, c;
	int		*arr[3];

	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;

	printf("3���� ���� �Է� : ");
	scanf("%d", arr[0]);			// scanf("%d", &a);
	scanf("%d", arr[1]);			// scanf("%d", &b);
	scanf("%d", arr[2]);			// scanf("%d", &c);

	printf("a : %d \n", *arr[0]);
	printf("b : %d \n", *arr[1]);
	printf("c : %d \n", *arr[2]);

	return 0;
}

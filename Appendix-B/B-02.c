#include <stdio.h>
int main(void)
{
	printf("Hello \n");				// ǥ�� ���(�����)
	freopen("test.txt", "w", stdout);
	printf("Hi~ \n");				// ���� ���(freopen.txt)

	fclose(stdout);

	return 0;
}

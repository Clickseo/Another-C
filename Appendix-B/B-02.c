#include <stdio.h>
int main(void)
{
	printf("Hello \n");				// 표준 출력(모니터)
	freopen("test.txt", "w", stdout);
	printf("Hi~ \n");				// 파일 출력(freopen.txt)

	fclose(stdout);

	return 0;
}

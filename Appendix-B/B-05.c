#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t		t;
	struct tm	*gmt, *local;

	// time( ) 함수를 이용하여 현재 시간을 구한다.
	t = time(NULL);
	printf("현재 GMT: %d \n", t);

	// 현재 시간을 GMT와 지역 표준 시간으로 변환
	gmt = gmtime(&t);
	local = localtime(&t);

	// tm 구조체에 저장된 값을 지정된 문자열로 변환
	//지정된 문자열 형식: Www Mmm dd hh:mm:ss yyy
	printf("GMT  표준 시간: %s \n", asctime(gmt) );
	printf("지역 표준 시간: %s \n", asctime(local) );

	return 0;
}

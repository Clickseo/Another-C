#include <stdio.h>
int main(void)
{
	// 함수 호출: int OUTPUT() 함수
	OUTPUT();	// warning C4013: 'OUTPUT'이(가) 정의되지 않았습니다. extern은 int형을 반환하는 것으로 간주합니다.
	
	return 0;
}

// 함수 정의: void OUTPUT() 함수
// error C2371: 'OUTPUT' 재정의. 기본 형식이 다릅니다.
void OUTPUT(void) {
	printf("Hello World!!! \n");
}

// 구조체와 공용체
#include <stdio.h>

// 구조체 비트 필드
typedef struct _uint {
	unsigned int	FirstBit: 8;
	unsigned int	SecondBit: 8;
	unsigned int	ThirdBit: 8;
	unsigned int	ForthBit: 8;
}UINT;

// 공용체: 정수형과 구조체 멤버
typedef union _endian {
	int	a;
	UINT	b;
}ENDIAN;

int main(void)
{
	ENDIAN	 temp;

	temp.a = 0x12345678;

	// "Big endian" 과 "Little endian"
	printf("temp.i: %X \n", temp.a);		// 12345678
	printf("temp.i: %X \n", temp.b.FirstBit);	// 78
	printf("temp.i: %X \n", temp.b.SecondBit);	// 56
	printf("temp.i: %X \n", temp.b.ThirdBit);	// 34
	printf("temp.i: %X \n", temp.b.ForthBit);	// 12

	return 0;
}

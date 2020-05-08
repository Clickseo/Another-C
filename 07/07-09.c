char *my_strcat(char *pStr1, const char *pStr2)
{
	char	*p = pStr1;

	// 1단계 : 대상 문자열에서 널 문자의 위치(주소)탐색
	while(*p != '\0')			// while(*p)
		p++;

	// 2단계 : 원본 문자열을 모두 대상 문자열로 복사
	while(*pStr2 != '\0')		// while(*pStr2)
		*p++ = *pStr2++;

	// 3단계 : 대상 문자열의 맨 마지막에 널 문자 추가
	*p = '\0';

	return pStr1;
}

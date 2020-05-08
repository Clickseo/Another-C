int	my_atoi(const char *pStr)
{
	int	res = 0, state = 0;

	// 1) 부호 처리 : 양수와 음수 판단
	if(*pStr == '+')
		pStr++;
	else if(*pStr == '-')
	{
		pStr++;
		state = 1;
	}

	// 2) 정수로 변환(절대값)
	while(*pStr != '\0')
		res = (res * 10) + (*pStr++ - 48);

	// 3) 절대 값으로 양수 또는 음수 반환
	return state ? -res : res;
}

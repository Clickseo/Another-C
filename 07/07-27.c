double  my_atof (const  char  *pStr)
{
	int	sign = 0;
	double	res = 0.0,  num = 1;

	// 1) 부호 처리: 양수와 음수 판단
	if(*pStr == '+')
		sign++;
	else if(*pStr == '-')
	{
		sign = 1;
		pStr++;
	}

	// 2) 정수 부분: 정수로 변환(절대값)
	while(*pStr && '0' <= *pStr && *pStr <= '9')
	{
		res = (res * 10) + (*pStr - '0');
		pStr++;
	}

	// 3) 소수 부분: 정수로 변환(소수점 이하)
	if (*pStr == '.') 
	{
		pStr++;

		for(; *pStr && *pStr >= '0' && *pStr <='9'; pStr++)
		{
			num *= 0.1;
			res += (*pStr - '0') * num;
		}
	}

	// 4) 절대 값으로 양수 또는 음수 반환
	return sign ? -res : res;
}

double  my_atof (const  char  *pStr)
{
	int	sign = 0;
	double	res = 0.0,  num = 1;

	// 1) ��ȣ ó��: ����� ���� �Ǵ�
	if(*pStr == '+')
		sign++;
	else if(*pStr == '-')
	{
		sign = 1;
		pStr++;
	}

	// 2) ���� �κ�: ������ ��ȯ(���밪)
	while(*pStr && '0' <= *pStr && *pStr <= '9')
	{
		res = (res * 10) + (*pStr - '0');
		pStr++;
	}

	// 3) �Ҽ� �κ�: ������ ��ȯ(�Ҽ��� ����)
	if (*pStr == '.') 
	{
		pStr++;

		for(; *pStr && *pStr >= '0' && *pStr <='9'; pStr++)
		{
			num *= 0.1;
			res += (*pStr - '0') * num;
		}
	}

	// 4) ���� ������ ��� �Ǵ� ���� ��ȯ
	return sign ? -res : res;
}

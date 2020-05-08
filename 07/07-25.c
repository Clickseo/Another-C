int	my_atoi(const char *pStr)
{
	int	res = 0, state = 0;

	// 1) ��ȣ ó�� : ����� ���� �Ǵ�
	if(*pStr == '+')
		pStr++;
	else if(*pStr == '-')
	{
		pStr++;
		state = 1;
	}

	// 2) ������ ��ȯ(���밪)
	while(*pStr != '\0')
		res = (res * 10) + (*pStr++ - 48);

	// 3) ���� ������ ��� �Ǵ� ���� ��ȯ
	return state ? -res : res;
}

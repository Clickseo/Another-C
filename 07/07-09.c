char *my_strcat(char *pStr1, const char *pStr2)
{
	char	*p = pStr1;

	// 1�ܰ� : ��� ���ڿ����� �� ������ ��ġ(�ּ�)Ž��
	while(*p != '\0')			// while(*p)
		p++;

	// 2�ܰ� : ���� ���ڿ��� ��� ��� ���ڿ��� ����
	while(*pStr2 != '\0')		// while(*pStr2)
		*p++ = *pStr2++;

	// 3�ܰ� : ��� ���ڿ��� �� �������� �� ���� �߰�
	*p = '\0';

	return pStr1;
}

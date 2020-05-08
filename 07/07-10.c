char *my_strcat(char *pStr1, const char *pStr2)
{
	char	*p = pStr1;

	while(*p != '\0')
		p++;

	strcpy(p, pStr2);

	return pStr1;
}

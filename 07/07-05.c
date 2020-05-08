char	*my_strcpy(char *pStr2, const char *pStr1)
{
	char *p = pStr2;

	while(*pStr1 != '\0')		// while(*pStr1)
		*p++ = *pStr1++;

	*p = '\0';

	return pStr2;
}

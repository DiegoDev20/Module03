char *ft_strcat(char *dest, char *src)
{
	char *t=dest;
	while(*t)
		t++;
	while(*src)
	{
		*t=*src;
		t++;
		src++;
	}
	return dest;
}

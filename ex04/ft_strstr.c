char *ft_strstr(char *str, char *to_find)
{
	while(*str)
	{
	if(*str==*to_find)
	{
		char *t1=to_find;
		char *t2=str;
		while(*t1 && *t1==*t2)
		{
			t1++;
			t2++;
		}
		if(!*t1)
		{
			return str;
		}
	}
	str++;
	}
	return NULL;
}

unsigned int ft_strlcat(char *dest,char *src, unsigned int size)
{
	char *t1=src;
	char *t2=dest;
	int sizesrc=0;
	int sized=0;
	while(*t1)
	{
		sizesrc++;
		t1++;
	}
	while(*t2)
	{
		sized++;
		t2++;
	}
	if((sizesrc+sized)<size)
	{
		while(*src)
		{
			*t2=*src;
			t2++;
			src++;	
		}
		*t2='\0';
		return sizesrc+sized;
		
	}
	return 0;
	
}

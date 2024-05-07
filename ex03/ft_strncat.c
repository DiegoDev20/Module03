char *ft_strncat(char *dest,const char *src,unsigned int nb) 
{
    char *t=dest;
    while(*t) 
	{
        t++;
    }
	while(nb>0)
	{
        *t=*src;
        t++;
        src++;
	nb--;
    	}
	*t='\0';
    return dest;
}

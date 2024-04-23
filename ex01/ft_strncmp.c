int ft_strcmp(char *s1,char *s2,unsigned int nb) 
{
    while (nb>0) 
	{
        if (*s1 != *s2)
            return *s1-*s2;          
        s1++;
        s2++;
		nb--;
    }
    return 0;
}

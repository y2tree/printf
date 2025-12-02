int     ft_putstr(char *s)
{
    int i;

    if (!s)
        return ;
    i = 0;
    while(s[i])
    {
        write(1, s[i], 1);
        i++;
    }
}

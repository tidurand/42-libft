char	ft_tolower(unsigned char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

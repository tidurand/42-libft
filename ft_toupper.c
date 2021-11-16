char	ft_toupper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

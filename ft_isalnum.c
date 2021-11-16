#include "libft.h"

int	ft_isalnum(unsigned char c)
{
	if ((ft_isalpha(c) || ft_isdigit(c)) == 1)
		return (1);
	return (0);
}

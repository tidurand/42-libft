#include "libft.h"

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;
	int	i;

	sign = 1;
	nb = 0;
	i = 0;
	if (str[i] == '-')
	{
		sign *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += (int)str[i] - '0';
		i++;
	}
	return (sign * nb);
}

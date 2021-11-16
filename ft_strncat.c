#include "libft.h"

int	ft_strlen(char	*str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	i = 0;
	if (nb == 0)
	{
		return (dest);
	}
	while (i <= lensrc && i < nb)
	{
		dest[i + lendest] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (dest);
}

#include "libft.h"

int	ft_strlen(char	*str);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lendest;
	int	lensrc;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	i = 0;
	while (i <= lensrc)
	{
		dest[i + lendest] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (dest);
}

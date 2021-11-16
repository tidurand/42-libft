#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen (src) + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

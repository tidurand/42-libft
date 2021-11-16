#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
    void	*dest;
    int lenght;

    lenght = (size * nmemb);
	dest = malloc(lenght);
	if (dest == NULL)
		return (NULL);
        
    if (dest)
        ft_bzero(dest, lenght);

	return (dest);
}
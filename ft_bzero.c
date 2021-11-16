#include "libft.h"

void    ft_bzero (void *s, size_t n)
{
    char    *ptr;
    int i;

    ptr = s;
    i = 0;
    while (n > 0)
    {
        ptr[i] = '\0';
        n--;
        i++;
    }
}

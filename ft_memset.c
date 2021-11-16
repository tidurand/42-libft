#include "libft.h"

void    *ft_memset (void *s, int c, size_t n)
{
    char *ptr;
    int i;

    ptr = s;
    i = 0;
    while (n > 0)
    {
        ptr[i] = c;
        n--;
        i++;
    }
    return (s);
}

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char *ptr;
    char *ptr2;
    int i;

    ptr = dest;
    ptr2 = src;
    i = 0;

    while (ptr2[i-1] != c)
    {
        ptr[i] = ptr2[i];
        i++;
    }
    dest = ptr;
    return dest;
}

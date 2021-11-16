#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *ptr;
    char *ptr2;
    int i;

    ptr = dest;
    ptr2 = src;
    i = 0;
    while (n > 0)
    {
        ptr[i] = ptr2[i];
        n--;
        i++;
    }
    dest = ptr;
    return dest;
}

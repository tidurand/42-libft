#include "libft.h"

char    *strnchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    
    while (s[i] != c)
        i--;

    if (s[i] == c)
        return (&s[i]);

    return 0;
}
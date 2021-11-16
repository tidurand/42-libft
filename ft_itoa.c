#include "libft.h"

char    *ft_itoa(int n)
{
    int i = 0;
    char *res = malloc(sizeof(n) * 32);
    
    if (res == NULL)
        return NULL;
    ft_putnbr(n);
}
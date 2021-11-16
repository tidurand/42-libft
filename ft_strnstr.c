#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    int i;
    int j;
    char res;

    i = 0;
    j = 0;
    if(s2 == NULL)
        return (s1);

    while(i < len)
    {
        if (s1[i] == s2[j])
        {
            res = s1[i];
            while (s1[i] == s2[j] && s2[j] != '\0')
            {
                i++;
                j++;
            }
            if (s2[j] == '\0')
                {
                    return (&res);
                }
            i--;
            j = 0;
        }
        i++;
    }
    return (NULL);
}
#include "libft.h"

char    **ft_split(char const *s, char c)
{
    char    **strs;
    char    *cut;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    strs = malloc(sizeof(char) * ft_strlen(s));
    if (strs == NULL)
		return (NULL);

    while (s[i])
    {
        k = 0;
        while (s[i] != c)
        {
            cut[k] = s[i];
            i++;
        }
        ft_strcpy(strs[j], cut);
        ft_bzero(cut, sizeof(cut));
        j++;
        i++;
    }

    return(strs);
}
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *ptr1;
    char *ptr2;
    int i;

    ptr1 = s1;
    ptr2 = s2;
    i = 0;
	if (n <= 0)
		return (0);
	while (ptr1[i] && ptr2[i] && ptr1[i] == ptr2[i] && (i + 1) < n)
	{
		i++;
	}
	return (ptr1[i] - ptr2[i]);
}

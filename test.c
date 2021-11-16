#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    printf("TEST DE LA LIB_FT \n\n");

    printf("isalpha :\n");
    printf("original : %d, ft : %d\n", isalpha('B'), ft_isalpha('B'));
    printf("original : %d, ft : %d\n\n", isalpha('='), ft_isalpha('='));

    printf("isdigit :\n");
    printf("original : %d, ft : %d\n", isdigit('8'), ft_isdigit('8'));
    printf("original : %d, ft : %d\n\n", isdigit('='), ft_isdigit('='));

    printf("isalnum :\n");
    printf("original : %d, ft : %d\n", isalnum('9'), ft_isalnum('9'));
    printf("original : %d, ft : %d\n\n", isalnum('='), ft_isalnum('='));

    printf("isascii :\n");
    printf("original : %d, ft : %d\n", isascii('8'), ft_isascii('8'));
    printf("original : %d, ft : %d\n\n", isascii('~'), ft_isascii('~'));

    printf("isprint :\n");
    printf("original : %d, ft : %d\n", isprint('8'), ft_isprint('8'));
    printf("original : %d, ft : %d\n\n", isprint('~'), ft_isprint('~'));

    printf("strlen :\n");
    printf("original : %d, ft : %d\n", strlen("Bonjour !"), ft_strlen("Bonjour !"));

    printf("memset :\n");
    printf("bzero :\n");
    printf("memcpy :\n");
    printf("memmove :\n");
    printf("strlcpy :\n");
    printf("strlcat :\n");
    printf("toupper :\n");
    printf("tolower :\n");
    printf("strchr :\n");
    printf("strrchr :\n");
    printf("strncmp :\n");
    printf("memchr :\n");
    printf("memcmp :\n");
    printf("strnstr :\n");
    printf("atoi :\n");
    printf("calloc :\n");
    printf("strdup :\n");
    printf("substr :\n");
    printf("strjoin :\n");
    printf("strtrim :\n");
    printf("split :\n");
    printf("itoa :\n");
    printf("strmapi :\n");
    printf("striteri :\n");
    printf("putchar_fd :\n");
    printf("putstr_fd :\n");
    printf("putendl_fd :\n");
    printf("putnbr_fd :\n");
    printf("lstnew :\n");
    printf("lstadd_front :\n");
    printf("lstsize :\n");
    printf("lstlast :\n");
    printf("lstadd_back :\n");
    printf("lstdelone :\n");
    printf("lstclear :\n");
    printf("lstiter :\n");
    printf("lstmap :\n");
}
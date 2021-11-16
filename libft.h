#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct      s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;


void    *ft_memset (void *s, int c, size_t n);
void    ft_bzero (void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
//void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
//void    *ft_memmove(void *dest, const void *src, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_isalpha(unsigned char c);
int     ft_isdigit(unsigned char c);
int     ft_isalnum(unsigned char c);
int     ft_isprint(unsigned char c);
int     ft_isascii(unsigned char c);
char	ft_toupper(unsigned char c);
char	ft_tolower(unsigned char c);
void	ft_putchar(char c);
void    ft_putchar_fd(char c, int fd);
void	ft_putstr(char *str);
void    ft_putstr_fd(char const *s, int fd);
void	ft_putnbr(int nb);
void    ft_putnbr_fd(int n, int fd);
void	ft_putendl(char *str);
void    ft_putendl_fd(char const *s, int fd);
int     ft_strlen(char *str);
int     ft_strcmp(char *s1, char *s2);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
int     ft_strequ(char const *s1, char const *s2);
int     ft_strnequ(char const *s1, char const *s2, size_t n);
char    *strchr(const char *s, int c);
char    *strnchr(const char *s, int c);
char    *ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strdup(char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strjoin(int size, char **strs, char *sep);
int     ft_atoi(char *str);
char    *ft_itoa(int n);
void    *calloc(size_t nmemb, size_t size);
char    **ft_split(char const *s, char c);
#endif
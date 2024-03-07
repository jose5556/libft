#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     ft_isalpha(int c);

int     ft_isdigit(int c);

int     ft_isalnum(int c);

int     ft_isascii(int c);

int     ft_isprint(int c);

size_t     ft_strlen(const char *s);

void    *ft_memset(void *s, int c, size_t n);

void    ft_bzero(void *s, size_t n);

void    *ft_memcpy(void *dest, const void *src, size_t n);

void	*memmove(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dest, char *src, size_t n);

size_t	ft_strlcat(char *dest, const char *src, size_t n);

int     ft_toupper(int c);

int     ft_tolower(int c);

char	*strchr(const char *s, int c);

char	*strrchr(const char *s, int c);

int	strncmp(const char *s1, const char *s2, size_t n);

void	*memchr(const void *s, int c, size_t n);

int	memcmp(const void *s1, const void *s2, size_t n);

char	*strnstr(const char *big, const char *little, size_t len)

int	atoi(const char *nptr);

//void *calloc(size_t nmemb, size_t size);

//char *strdup(const char *s);

#endif

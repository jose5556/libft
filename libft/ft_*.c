#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
		(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)  //typeof n should be size_t
{
	int	i;
	int	*ptr;

	ptr = s;
	i = 0;
	while (n)
	{
		ptr[i] = '\0';
		i++;
		n--;
	}
}

//void	*memmove(void *dest, const void *src, size_t n)
//{

//}

int     ft_toupper(int c)
{
        if ( c >= 97 && c <= 122)
                return (c -= 32);
        return (c);
}

int     ft_tolower(int c)
{
        if (c >= 65 && c <= 90)
                return (c += 32);
        return (c);
}

int	main(void)
{
	printf("%c\n", ft_tolower('G'));
}

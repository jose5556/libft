#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
        ft_memset(s, '\0', n);
}

/* int	main(void)
{
	char	s[4] = "era";
	//ft_bzero(s, 2);
	bzero(s, 1);
	printf("%s\n", s);
	return (0);
} */

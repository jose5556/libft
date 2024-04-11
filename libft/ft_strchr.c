#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

/* int	main(void)
{
	char	s[3] = "era";
	printf("%s\n", ft_strchr(s, 'r'));
	printf("%s\n", strchr(s, 'r'));
}
 */
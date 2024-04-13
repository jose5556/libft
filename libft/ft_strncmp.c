#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/* int	main(void)
{
	printf("%d\n", ft_strncmp("abcd", "abcdf", 5));
	printf("%d\n", strncmp("abcd", "abcdf", 5));
}
 */

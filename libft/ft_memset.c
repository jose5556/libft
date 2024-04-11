#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n)
	{
		((char *)s)[i] = c;
		n--;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	char str[9] = "eraumavez";
	printf("%s\n", ft_memset(str, 'z', 5));
	//printf("%s\n", memset(str, 'z', 5));
	return (0);
}
 */
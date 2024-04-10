#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	else if (nmemb * size > 2147483647)
		return (NULL);
	void    *ptr;
	ptr = malloc(nmemb * size);
	return (ptr);
}
/*
int	main(void)
{
	int	i;
	char	*str = (char*) ft_calloc(35, sizeof(char));

	i = 0;
	while (i < 35 * sizeof(char))
	{
		str[i] = 'a';
		i++;
	}
	printf("%zu", ft_strlen(str));
	return (0);
}*/

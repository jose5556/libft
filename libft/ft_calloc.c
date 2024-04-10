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
	i = 0;

	char	*str = (char*) ft_calloc(3, sizeof(char));
	char    *strr = (char*) calloc(3, sizeof(char));
	
	while (i < 3 * sizeof(char))
	{
		str[i] = 'a';
		i++;
	}
	printf("%zu", ft_strlen(str));
	while (i < 3 * sizeof(char))
        {
                strr[i] = 'a';
                i++;
        }
	printf("%zu", ft_strlen(strr));
	return (0);
}*/

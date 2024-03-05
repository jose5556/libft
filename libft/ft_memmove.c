#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	temporary[n];

	i = 0;
	while (i < n)
	{
		temporary[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (temporary[i])
	{
		((char *)dest)[i] = temporary[i];
		i++;
	}
}

int	main(void)
{
	char    *src;
        char    dest[60];

        src = "eraumavez";
        ft_memmove(dest, src, 3);
	//memmove(dest, src, 3);
        printf("%s\n", dest);
}

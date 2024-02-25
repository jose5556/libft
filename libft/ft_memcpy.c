#include <unistd.h>
#include <string.h>
#include <stdio.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)  
{
        int	i;

	i = 0;
	while (n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
		n--;
	}
}

int	main(void)
{
	char	*src;
	char	dest[60];

	src = "eraumavez";
	ft_memcpy(dest, src, 3);
	printf("%s\n", dest);
}

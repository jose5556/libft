#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*s == c)
		{
			break;
		}
		s++;
		n--;
	}
}

int	main(void)
{
	printf("%p\n", ft_memchr("eraumavez", 'm', 9));
	printf("%p\n", memchr("eraumavez", 'm', 9));
}

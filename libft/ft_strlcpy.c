#include <unistd.h>
#include <stdio.h>
#include <string.h>


char	*ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	t;
	int	i;

	i = 0;
	t = 0;
	while (t < n - 1)
	{
		dest[i] = src[i];
		i++;
		t++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[60];

	ft_strlcpy(dest, "eraumavez", 4);
	printf("%s\n", dest);
}

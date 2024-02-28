#include <unistd.h>
#include <stdio.h>
#include <string.h>


size_t	*ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	src_return;
	size_t	i;

	i = 0;
	src_return = 0;
	if (n <= 0)
		return (0);
	if (!src || !dest)
		return (0);
	src_return = ft_strlen(src);
	while (i < (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[60];

	strlcpy(dest, "eraumavez", 4);
	printf("%s\n", dest);
}

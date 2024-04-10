/*
The strlcpy() and strlcat() functions copy and concatenate strings respectively. 
They are designed to be safer, more consistent, and less error prone replacements for strncpy(3) and strncat(3). 
Unlike those functions, strlcpy() and strlcat() take the full size of the buffer 
(not just the length) and guarantee to NUL-terminate the result (as long as size is larger than 0 or, in the case of strlcat(), 
as long as there is at least one byte free in dst). 
Note that a byte for the NUL should be included in size. 
Also note that strlcpy() and strlcat() only operate on true ''C'' strings. 
This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	src_return;
	size_t	i;

	i = 0;
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
	return (src_return);
}
/*
int	main(void)
{
	char	dest[60];

	printf("%ld\n", ft_strlcpy(dest, "eraumavez", 4));
	printf("%s\n", dest);
}*/

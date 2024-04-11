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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	//size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	//src_len = ft_strlen(src);
	i = 0;

	if (!src && !dst)
		return (0);

	if (!src)
		return (dst_len);
	while (i < size)
	{
		dst[dst_len] = src[i];
		i++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (dst_len - i);
}

/* int	main(void)
{
	char	dest[3] = "era";
	printf("%ld\n", ft_strlcat(dest, "uma", 3));
	printf("%s\n", dest);
}
 */
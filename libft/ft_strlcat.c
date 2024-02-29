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

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 3; //ft_strlen(dest);
	src_len = 3; //ft_strlen(src);
	i = 0;

	if (!src && !dest)
		return (0);

	if (!src)
		return (dest_len);
	while (i < n)
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest_len - i);
}

int	main(void)
{
	char	dest[3] = "era";
	printf("%ld\n", ft_strlcat(dest, "uma", 3));
	printf("%s\n", dest);
}

/*
 * The strnstr() function locates the first	occurrence of the  null-termi-
       nated  string little in the string big, where not more than len characters are
       searched.  Characters that appear after	a `\0'	character  are
       not  searched.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (((char *)big));
	while (len > 0)
	{
		while (big[i] == little[j])
		{
			i++;
			j++;
			len--;
			if (len == 0)
                                return (NULL);
			if (little[j + 1] == '\0')
				return (((char *)big));
		}
		i = 0;
		j = 0;
		big++;
		len--;
	}
	return (NULL);
}

/* int	main(void)
{
	char big[12] = "era uma vez";
	char little[4] = "uma";

	printf("%s\n", ft_strnstr(big, little, 7));
}
 */
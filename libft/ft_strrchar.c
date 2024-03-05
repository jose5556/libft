#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	s += len;
	while (len >= 0)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		if (len - 1 == 0 && s[0] != c)
		{
			return (0);
		}
		len--;
		s--;
	}
}

int	main(void)
{
	char	s[5] = "abcab";
	printf("%s\n", ft_strrchr(s, 'a'));
	//printf("%s\n", strrchr(s, 'i'));
}

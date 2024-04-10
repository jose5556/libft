#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_string;
	int	len;

	len = ft_strlen(s);
	new_string = (char*) malloc(len * (sizeof(char)));

	ft_strlcpy(new_string, s, len);

	return (new_string);
}

int	main(void)
{
	const	char	str[3] = "ola";
	printf("%s", ft_strdup(str));
}


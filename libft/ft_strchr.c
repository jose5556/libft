/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:32:08 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/17 19:35:24 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s) + i;
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[len]);
	}
	return (NULL);
}

/* int	main(void)
{
	char	s[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	printf("%s\n", ft_strchr(s, '\0'));
	printf("%s\n", strchr(s, '\0'));
} */
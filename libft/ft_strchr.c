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

	len = ft_strlen(s);
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[len]);
	}
	return (NULL);
}

/* int	main(void)
{
	char	s[] = "";
	printf("%s\n", ft_strchr(s, 'r'));
	printf("%s\n", strchr(s, 'r'));
} */
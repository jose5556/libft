/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:39:10 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/14 16:39:19 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (0);
}

/* int	main(void)
{
	char	s[5] = "abcab";
	//printf("%s\n", ft_strrchr(s, 'i'));
	printf("%s\n", strrchr(s, 'i'));
}
 */

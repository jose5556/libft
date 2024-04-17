/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:39:10 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/17 19:50:26 by joseoliv         ###   ########.fr       */
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
		len--;
		s--;
	}
	return (0);
}

/* int	main(void)
{
	char	s[] = "xeraumavezx";
	printf("%s\n", ft_strrchr(s, 'x'));
	printf("%s\n", strrchr(s, 'x'));
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:45:26 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/13 16:46:24 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

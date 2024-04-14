/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:33:20 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/14 16:37:06 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
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
	return (dst_len + src_len);
}

/* int	main(void)
{
	char	dest[3] = "era";
	printf("%ld\n", ft_strlcat(dest, "uma", 3));
	printf("%s\n", dest);
}
 */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:31:05 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/17 18:50:12 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (NULL);
	if (ft_strlen(dest) > ft_strlen(src))
	{
		return (ft_memcpy(dest, src, n));
	}
	else
	{
		while (n--)

			((char *)dest)[n] = ((char *)src)[n];
	}
	return (dest);
}

/* int	main(void)
{
	char    src[50];
    char    dest[] = "eraumavez";

    //ft_memmove(src, src + 2, 3);
	memmove(src, src + 2, 3);
    printf("%s\n", dest);
} */
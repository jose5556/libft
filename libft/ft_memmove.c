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
	int		j;

	j = (int)n;
	if (!src && !dest)
		return (dest);
	if (ft_strlen(dest) > ft_strlen(src))
	{
		return (ft_memcpy(dest, src, n));
	}
	else
	{
		while (j)
		{
			j--;
			((char *)dest)[j] = ((char *)src)[j];
		}
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
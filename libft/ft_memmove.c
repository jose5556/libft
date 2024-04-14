/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:31:05 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/14 16:31:09 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	temporary[n];

	i = 0;
	while (i < n)
	{
		temporary[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (temporary[i])
	{
		((char *)dest)[i] = temporary[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char    *src;
        char    dest[60];

        src = "eraumavez";
        ft_memmove(dest, src, 3);
	//memmove(dest, src, 3);
        printf("%s\n", dest);
} */

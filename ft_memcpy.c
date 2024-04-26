/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:30:47 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/14 16:30:52 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
		n--;
	}
	return (dest);
}

/* int	main(void)
{
	char	*src;
	char	dest[60];

	src = "eraumavez";
	ft_memcpy(dest, NULL, 3);
	printf("%s\n", dest);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:38:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/21 18:58:24 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (len > ft_strlen(big))
		len = ft_strlen(big);
	while (big[i] && len > 0)
	{
		while (big[i] && big[i] == little[j])
		{
			if (little[j + 1] == '\0')
				return (((char *)big));
			i++;
			j++;
			if (--len == 0)
				return (NULL);
		}
		i = 0;
		j = 0;
		len--;
		big++;
	}
	return (NULL);
}

/* int	main(void)
{
	printf("%s\n", ft_strnstr("abcd", "xx", 6));
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:38:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/21 19:16:49 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return (((char *)big));
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
	ft_strnstr("abcd", "xx", 6);
} */
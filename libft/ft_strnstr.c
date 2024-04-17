/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:38:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/17 22:23:45 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!big || !little)
		return (NULL);
	if (ft_strlen(little) == 0)
		return (((char *)big));
	while (len > 0)
	{
		while (big[i] == little[j] && big[i])
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
	printf("%s\n", ft_strnstr("", "", 0));
} */
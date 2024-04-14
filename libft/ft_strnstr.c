/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:38:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/14 16:39:02 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (((char *)big));
	while (len > 0)
	{
		while (big[i] == little[j])
		{
			i++;
			j++;
			len--;
			if (len == 0)
                                return (NULL);
			if (little[j + 1] == '\0')
				return (((char *)big));
		}
		i = 0;
		j = 0;
		big++;
		len--;
	}
	return (NULL);
}

/* int	main(void)
{
	char big[12] = "era uma vez";
	char little[4] = "uma";

	printf("%s\n", ft_strnstr(big, little, 7));
}
 */

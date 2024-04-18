/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:57:41 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/11 19:03:40 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	j = 0;

	if (ft_strlen(set) == 0)
	{
		if (ft_strlen(s1) == 0)
			return (NULL);
		result = (char *) malloc(ft_strlen(s1) + sizeof(char) + 1);
		ft_strlcpy(result, s1, ft_strlen(s1) + 1);
		return (result);
	}
	while (set[j])
	{
		if (s1[0] == set[j])
		{
			j = 0;
			while (s1[i] == set[j])
			{
				k++;
			}
		}
		j++;
	}
} */

/* int	main(void)
{
	char	s1[50] = "2era 1   21uma ve1z";
	printf("%s\n", ft_strtrim(s1, ""));
} */
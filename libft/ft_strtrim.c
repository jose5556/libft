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

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;
	char	*result;

	i = 0;
	j = 0;
	k = 0;
	result = (char*) malloc (ft_strlen(s1) * sizeof(char));
	if (result == NULL)
		return (result);
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				break;
			j++;
		}
		if (j < 3)
		{
			j = 0;
			i++;
			continue;
		}
		result[k] = ((char *)s1)[i];
		i++;
		j = 0;
		k++;
	}
	return (result);
}
/*
int	main(void)
{
	char	s1[50] = "2era 1   21uma ve1z";
	char	set[50] = "1 2";
	printf("%s", ft_strtrim(s1, set));
}*/

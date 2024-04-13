/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:34:14 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/11 17:56:02 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int	i;
	int	j;

	result = (char*) malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (result == NULL)
		return (result);
	i = 0;
	j = 0;
	while (s1[j])
	{
		result[i] = ((char *)s1)[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
        {
                result[i] = ((char *)s2)[j];
                i++;
                j++;
        }
	return (result);
}
/*
int	main(void)
{
	char	s1[4] = "era";
	char	s2[4] = "vez";

	printf("%s", ft_strjoin(s1, s2));
}*/
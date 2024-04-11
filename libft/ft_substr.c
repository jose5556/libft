/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:55:50 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/11 17:32:58 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	result = (char*) malloc(len * (sizeof(char)));
	if (result == NULL)
		return (result);
	while (i < len)
	{
		result[i] = ((char *)s)[start];
		i++;
		start++;
	}
	return (result);
}
/*
int	main(void)
{
	char	str[9] = "eraumavez";
	printf("%s", ft_substr(str, 0, 0));
}*/

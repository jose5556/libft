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
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);
	result = (char*) malloc(len * sizeof(char) + 1);
	if (!result)
		return (result);
		ft_strlcpy(result, s + start, len + 1);
	return (result);
}
/*
int	main(void)
{
	char	str[9] = "eraumavez";
	printf("%s", ft_substr(str, 3, 3));
}
*/
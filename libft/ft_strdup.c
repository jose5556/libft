/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:32:27 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/14 16:32:31 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_string;
	int	len;

	len = ft_strlen(s);
	new_string = (char*) malloc(len * (sizeof(char)));
	if (new_string == NULL)
		return (new_string);
	ft_strlcpy(new_string, s, len);

	return (new_string);
}
/*
int	main(void)
{
	const	char	str[3] = "ola";
	printf("%s", ft_strdup(str));
}*/

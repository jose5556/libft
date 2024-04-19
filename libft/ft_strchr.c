/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:32:08 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/19 16:15:42 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s);
	while (s[i])
	{
		if (s[i] == c)
			return (((char *)s) + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[len]);
	return (NULL);
}

/* int	main(void)
{
	char	s[] = "    eraumavez";
	printf("%s\n", ft_strchr(s, ' '));
	printf("%s\n", strchr(s, ' '));
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 03:33:18 by joseoliv          #+#    #+#             */
/*   Updated: 2024/12/17 12:44:50 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin_free(char *s1, char *s2, int i)
{
	char	*temp;

	if (!s1 || !s2)
		return (NULL);
	temp = ft_strjoin(s1, s2);
	if (!temp)
		return (NULL);
	if (i == 1 && s1)
		free(s1);
	else if (i == 2 && s2)
		free(s2);
	else
	{
		if (s1)
			free(s1);
		if (s2)
			free(s2);
	}
	return (temp);
}

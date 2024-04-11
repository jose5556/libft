/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:11:02 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/11 22:59:03 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*temporary;
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	result = (char *) malloc(j);
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (result[k])
	{
		while (s[i])
		{
			if (s[i] == c)
			{
				result = (char **) malloc(j * sizeof(char));
					while (result[k][l])
					{
						temporary = ft_substr(s, , )
					}
				j = 0;
				continue;
			}
			j++;
			i++;
		}
	}
	i = 0;
	j = 0;
	return (result);
} 

int	main(void)
{
	char	s[50] = "erauma vez";
	char	**result;

	result = ft_split(s, ' ');
}

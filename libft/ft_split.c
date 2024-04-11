/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:11:02 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/11 20:30:45 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != c)
		i++;
	result = (char **) malloc (i * sizeof(char) + 1);
	if (result[0] == NULL)
		return (NULL);
	write(1, "l", 1);
	ft_strlcpy(result[0], s, i);
	while (s[i])
	{
		j++;
		i++;
	}
	result[i] =  malloc (j * sizeof(char) + 1);
	if (result[1] == NULL)
		return (NULL);
	ft_strlcpy(result[1], s, j);
	return (result);
} 

int	main(void)
{
	char	s[50] = "erauma vez";
	char	**result;

	result = ft_split(s, ' ');
}
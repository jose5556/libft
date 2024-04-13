/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:11:02 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/13 16:46:58 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	result = (char **) malloc(j * sizeof(char *) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			result[k] = (char *) malloc(j * sizeof(char) + 1);
			ft_strlcpy(result[k], s + (i - j), j + 1);
			k++;
			j = 0;
		}
		else if (s[i + 1] == '\0')
		{
			j++;
			result[k] = (char *) malloc(j * sizeof(char) + 1);
			ft_strlcpy(result[k], s + (i - j + 1), j + 1);
		}
		i++;
		j++;
	}
	return (result);
}

int	main(void)
{
	char	s[50] = "era uma vez"; //i 10 j 3
	char	**result = ft_split(s, ' ');
	int		i;

	i = 0;
    while (result[i]) 
	{
        printf("%s\n", result[i]);
        i++;
    }
	return (0);
}
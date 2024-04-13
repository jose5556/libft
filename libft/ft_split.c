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
	char	*temporary;
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
			*result = (char *) malloc(j * sizeof(char)); //since j is "c", no need to add null space
			temporary = ft_substr(s, i - j, j);
			ft_strlcpy(result[k], temporary, ft_strlen(temporary));
			j = 0;
		}
		i++;
		j++;
	}
	return (result);
}

int	main(void)
{
	char	s[50] = "era uma vez";
	char	**result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = ft_split(s, ' ');
	while (result[i])
	{
		while (result[i][j])
		{
			printf("%c", result[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
}
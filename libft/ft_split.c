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

char	**fill_letters(char const *s, char c, char **result);
int		count_words(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	words = count_words(s, c);
	result = (char **) malloc(words * sizeof(char *) + 1);
	if (!result)
		return (NULL);
	result = fill_letters(s, c, result);
	return (result);
}

char	**fill_letters(char const *s, char c, char **result)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			j++;
			i++;
		}
		if (j > 0)
		{
			result[k] = (char *) malloc(j * sizeof(char) + 1);
			ft_strlcpy(result[k], &s[i - j], j + 1);
		}
		j = 0;
		k++;
	}
	return (result);
}

int	count_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			j++;
		while (s[i] != c && s[i])
			i++;
	}
	return (j);
}

/* int	main(void)
{
 	char **str;
 	int	i;

 	i = 0;
 	str = ft_split(" era uma    vez    ", ' ');
 	while (str[i])
 	{
 		printf("%s\n", str[i]);
 		i++;
 	}
}*/
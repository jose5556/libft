/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:29:23 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/14 16:29:25 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void    *ptr;
	size_t	i;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (i < nmemb * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/* int	main(void)
{
	int	i;
	i = 0;

	char	*str = (char*) ft_calloc(10, sizeof(char));
	//char    *strr = (char*) calloc(10, sizeof(char));
	
	while (i < 10 * sizeof(char))
	{
		str[i] = 'a';
		i++;
	}
	printf("%zu", ft_strlen(str));
	
	while (i < 40 * sizeof(char))
        {
                strr[i] = 'a';
                i++;
        }
	printf("%zu", ft_strlen(strr));*/

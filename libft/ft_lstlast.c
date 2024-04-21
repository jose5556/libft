/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:37:39 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/21 18:46:44 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int main(void)
{
	t_list	*list;
	t_list  *result;
	
	list = ft_lstnew("era");
	list->next = ft_lstnew("uma");
	list->next->next = ft_lstnew("vez");

	result = ft_lstlast(list);
	printf("%s", (char *)result->content);
} */
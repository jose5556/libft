/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:27:34 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/21 20:04:26 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!ft_lstlast(*lst))
        *lst = ft_lstnew(new);
    else
    {
        ft_lstlast(*lst)->next = ft_lstnew(new);
    }
}

int	main(void)
{
	t_list	*list;

	list = ft_lstnew("era");
    ft_lstadd_back(&list, ft_lstnew("new"));
	
    printf("%s", (char *)ft_lstlast(list));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:37:39 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/21 18:08:15 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst);
}

/* int main(void)
{
    t_list	*list1;
	t_list	*list2;
	t_list	*list3;
    t_list  *result;
	
	list1 = ft_lstnew("era");
	list2 = ft_lstnew("uma");
	list3 = ft_lstnew("vez");
    
	list1->next = list2;
	list2->next = list3;

    result = ft_lstlast(list1);
    printf("%s", (char *)result->content);
} */
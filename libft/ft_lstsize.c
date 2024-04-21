/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 23:13:37 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/21 17:59:27 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* int	main(void)
{
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	
	list1 = ft_lstnew("era");
	list2 = ft_lstnew("uma");
	list3 = ft_lstnew("vez");
	list1->next = list2;
	list2->next = list3;
	printf("%d", ft_lstsize(list1));
} */
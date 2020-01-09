/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:12:15 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/09 17:28:10 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*deb;
	t_list	*new;

	if (!lst || !(deb = ft_lstnew(f(lst->content))))
		return (0);
	new = deb;
	while (lst->next)
	{
		lst = lst->next;
		new = new->next;
		if (!(new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&deb, del);
			return (0);
		}
	}
	return (deb);
}

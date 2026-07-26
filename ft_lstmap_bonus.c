/* anonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymous** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous<anonymous@example.com         > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:29:15 by anonymous         #+#    #+#             */
/*   Updated: 2023/11/29 17:55:09 by anonymous        ###   ########.fr       */
/*                                                                            */
/* anonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymous** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*element;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		element = ft_lstnew(content);
		if (element == NULL)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, element);
		lst = lst->next;
	}
	return (new_list);
}

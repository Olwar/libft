/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oairola <oairola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:49:42 by oairola           #+#    #+#             */
/*   Updated: 2021/12/03 11:49:53 by oairola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*cur;
	t_list	*head;
	t_list	*temp;

	head = NULL;
	while (lst)
	{
		temp = (f)(lst);
		temp = ft_lstnew(temp->content, temp->content_size);
		if (!head)
		{
			head = temp;
			cur = temp;
		}
		if (!temp)
		{
			free(temp);
			return (NULL);
		}
		cur->next = temp;
		lst = lst->next;
		cur = cur->next;
	}
	return (head);
}

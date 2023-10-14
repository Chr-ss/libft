/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:50:07 by crasche       #+#    #+#                 */
/*   Updated: 2023/10/10 19:46:07 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*buffer;

	ret = 0;
	while (lst)
	{
		buffer = ft_lstnew(f(lst->content));
		if (!buffer)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, buffer);
		lst = lst->next;
	}
	return (ret);
}

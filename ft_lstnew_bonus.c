/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@example.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 12:13:55 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/27 12:16:29 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);
{
	t_list	*lst;

	lst = (l_list *)malloc(sizeof(t_list));
	if (!lst)
	{
		return (NULL);
	}
	lst->content = content;
	lst->next = NULL;

	return (lst);
}

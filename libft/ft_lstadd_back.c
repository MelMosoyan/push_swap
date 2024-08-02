/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:36:12 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/27 17:19:54 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_list **lst, int n)
{
	t_list	*temp;
	t_list	*new;

	temp = *lst;
	new = ft_lstnew(n);
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	else if (lst && *lst)
	{
		while (temp -> next)
		{
			temp = temp -> next;
		}
		temp -> next = new;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:32:43 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/18 18:05:28 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(t_list **lst, int n)
{
	t_list	*new;

	new = ft_lstnew(n);
	if (lst && *lst)
	{
		new -> next = *lst;
		*lst = new;
	}
	if (!(*lst))
		*lst = new;
}

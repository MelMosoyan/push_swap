/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_revrot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:40:04 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/26 17:04:56 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **head, int flag)
{
	t_list	*node;
	t_list	*tmp;

	tmp = *head;
	while (tmp -> next -> next)
		tmp = tmp -> next;
	node = tmp -> next;
	tmp -> next = NULL;
	node -> next = *head;
	*head = node;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrb(t_list **head, int flag)
{
	t_list	*node;
	t_list	*tmp;

	tmp = *head;
	while (tmp -> next -> next)
		tmp = tmp -> next;
	node = tmp -> next;
	tmp -> next = NULL;
	node -> next = *head;
	*head = node;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 4);
}
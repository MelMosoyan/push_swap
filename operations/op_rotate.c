/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:23:49 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/26 18:34:25 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **head, int flag)
{
	t_list	*tmp;
	t_list	*node;

	if (!head || !(*head) || !((*head)-> next))
		return ;
	node = *head;
	*head = (*head)-> next;
	node -> next = NULL;
	tmp = *head;
	while (tmp -> next)
		tmp = tmp -> next;
	tmp -> next = node;
	if (flag)
		write(1, "ra\n", 3);
}

void	rb(t_list **head, int flag)
{
	t_list	*tmp;
	t_list	*node;

	if (!head || !(*head) || !((*head)-> next))
		return ;
	node = *head;
	*head = (*head)-> next;
	node -> next = NULL;
	tmp = *head;
	while (tmp -> next)
		tmp = tmp -> next;
	tmp -> next = node;
	if (flag)
		write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr\n", 3);
}
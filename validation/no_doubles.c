/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_doubles.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:37:54 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/27 19:16:20 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	delete_list(t_list **head)
{
	t_list	*current;
	t_list	*next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}

int	no_doubles(t_list **head)
{
	t_list	*node;
	t_list	*tmp;

	if (!head || !(*head))
		return (0);
	node = *head;
	tmp = *head;
	while (node != NULL)
	{
		while (node != NULL && node -> next != NULL)
		{
			node = node -> next;
			if (node -> data == tmp -> data)
			{
				delete_list(head);
				write(2, "Error\n", 6);
				return (0);
			}
		}
		tmp = tmp -> next;
		node = tmp;
	}
	return (1);
}

// void	print_list(t_list **head)
// {
// 	t_list	*node;

// 	node = *head;
// 	while (node)
// 	{
// 		printf ("%d\n", node->data);
// 		node = node->next;
// 	}
// }

// int	main(int argc, char *argv[])
// {
// 	t_list	*node;

// 	if (argc > 1)
// 	{
// 		list(&node, argv);
// 		print_list(&node);
// 		if (no_doubles(&node))
// 			printf("ayo");
// 		else
// 		{
// 			printf("meh");
// 		}
// 	}
// }

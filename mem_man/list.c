/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:19:46 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/26 21:53:33 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fill_list(char *argvi, t_list **head, int j)
{
	int	n;

	n = 0;
	while (argvi[j] != '\0')
	{
		if ((argvi[j] >= '0' && argvi[j] <= '9')
			|| argvi[j] == '-')
		{
			n = ft_atoi(argvi + j);
			ft_lstadd_back(head, n);
			j += jump(argvi, j);
			if (argvi[j] == 0)
				return ;
		}
		j++;
	}
}

void	list(t_list **head, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		fill_list(argv[i], head, j);
		i++;
		j = 0;
	}
}

void	print_list(t_list **head)
{
	t_list	*node;

	node = *head;
	while (head && *head)
	{
		printf ("%d\n", node->data);
		node = node->next;
		if (!node)
			return ;
	}
}

// int	main(int argc, char *argv[])
// {
// 	t_list	*node;

// 	if (argc > 1)
// 	{
// 		list(&node, argv);
// 		print_list(&node);
// 	}
// }

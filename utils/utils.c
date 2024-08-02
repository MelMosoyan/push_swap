/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:22:45 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/26 21:15:28 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	list_to_arr(t_list **a, int *arr)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		arr[i] = tmp -> data;
		tmp = tmp -> next;
		i++;
	}
}

void	sort_arr(int *ordered, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (ordered[j] > ordered[j + 1])
				ft_swap(&ordered[j], &ordered[j + 1]);
			j++;
		}
		i++;
	}
}

void	sort_arr_index(int *arr, int *ordered, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i] == ordered[j])
			{
				arr[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	reset_list(t_list **a, int *arr)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp)
	{
		tmp -> data = *arr;
		tmp = tmp -> next;
		arr++;
	}
}

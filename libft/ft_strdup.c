/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:38:02 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/26 18:15:52 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_strdup(int *arr, int size)
{
	int	*dup;
	int	i;

	i = 0;
	dup = malloc(size * sizeof(int));
	if (dup == NULL)
		return (NULL);
	while (i < size)
	{
		dup[i] = arr[i];
		i++;
	}
	return (dup);
}

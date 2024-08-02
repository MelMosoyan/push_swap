/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:48:10 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/22 18:16:24 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	jump(char	*str, int j)
{
	int	i;

	i = 0;
	while (str[i + j])
	{
		if ((str[i + j] >= '0' && str[i + j] <= '9')
			|| str[i + j] == '-')
			i++;
		else
			break ;
	}
	return (i);
}

int	check(char *str, int i)
{
	int	k;

	k = 0;
	if (ft_atoi(str + i) > INT_MAX || ft_atoi(str + i) < INT_MIN)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (*(str) == '0')
	{
		str = str + k;
		k++;
	}
	k = 0;
	while (str[i + k] >= '0' && str[i + k] <= '9')
		k++;
	if (k > 10)
		return (0);
	return (1);
}

int	valid_integer(char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-')
			{
				if (!check(argv[i], j))
					return (0);
				j += jump(argv[i], j);
				if (argv[i][j] == 0)
					break ;
			}
			j++;
		}
		i++;
	}
	return (1);
}

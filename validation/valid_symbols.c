/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_symbols.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:56:22 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/27 16:28:25 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_valid(char *str, const char *vstr)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (!ft_strchr(vstr, str[j]))
			return (0);
		if (str[j] == '+' || str[j] == '-')
		{
			if (str[j + 1] < '0' || str[j + 1] > '9')
				return (0);
			if (j - 1 != -1 && str[j - 1] != ' ')
				return (0);
		}
		j++;
	}
	return (1);
}

int	valid_symbols(char	**argv)
{
	int			i;
	char		*val_str;

	i = 1;
	val_str = "0123456789+- ";
	if (!argv[1])
		return (0);
	while (argv[i])
	{
		if (!is_valid(argv[i], val_str))
			return (0);
		i++;
	}
	return (1);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc > 1 && valid_symbols(argv) && valid_integer(argv))
// 		write(1, "true", 4);
// 	else
// 		write(1, "false", 5);
// }

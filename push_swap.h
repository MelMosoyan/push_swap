/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:56:46 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/27 16:54:20 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

char	*ft_strchr(const char *s, int c);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, int n);
void	ft_lstadd_back(t_list **lst, int n);
long	ft_atoi(const char *str);
int		*ft_strdup(int *arr, int size);
int		valid_integer(char **argv);
int		valid_symbols(char	**argv);
int		jump(char *str, int j);
void	list(t_list **head, char **argv);
void	fill_list(char *argvi, t_list **head, int j);
int		no_doubles(t_list **head);
void	delete_list(t_list **head);
void	sa(t_list **head, int flag);
void	sb(t_list **head, int flag);
void	ss(t_list **h1, t_list **h2);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **head, int flag);
void	rb(t_list **head, int flag);
void	rr(t_list **a, t_list **b);
void	rra(t_list **head, int flag);
void	rrb(t_list **head, int flag);
void	rrr(t_list **a, t_list **b);
void	alt_sort2(t_list **a);
void	alt_sort3(t_list **a);
void	alt_sort4(t_list **a, t_list **b);
void	alt_sort5(t_list **a, t_list **b);
int		find_min_indx(t_list **a);
void	ft_swap(int *a, int *b);
void	list_to_arr(t_list **a, int *arr);
void	sort_arr(int *ordered, int size);
void	sort_arr_index(int *arr, int *ordered, int size);
void	reset_list(t_list **a, int *arr);
int		ft_sqrt(int num);
int		log_2(int num);
void	butterfly_sort(t_list **a, t_list **b);
int		find_max_indx(t_list **b);
void	a_sort(t_list **a, t_list **b);
void	print_list(t_list **head);
int		is_sorted(t_list **a);

#endif

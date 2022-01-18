/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:57:02 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/18 14:11:27 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <fcntl.h>
# include <unistd.h>
# include "../libft/libft.h"

void	ft_print_stack(t_list *nodoa, t_list *nodob);

void	ft_error(t_list **nodo);

int		checkParams(char *argv, t_list **nodo);

t_list	*new_nodo(void *num, size_t size);

void	check_doubles(t_list **nodo, long num);

void	get_contents(char *argv, t_list **nodo);

int		ft_size_stack(t_list *nodoa);

int		sorted(t_list **stack, int len);

void	start_sorting(t_list **stack_a, t_list **stack_b);

void	sort_small_stack(t_list **stack_a, t_list **stack_b, int len);

void	push_b(t_list **stack_a, t_list **stack_b);

void	push_a(t_list **stack_a, t_list **stack_b);

void	delete_content(t_list **stack_a);

void	swap(t_list **stack_a, int flag, char c);

void	swap_ss(t_list **stack_a, t_list **stack_b);

void	rotate(t_list **stack, int flag, char c);

void	rotate_rr(t_list **stack_a, t_list **stack_b);

void	reverse_rotate(t_list **stack, int flag, char c);

void	reverse_rotate_rr(t_list **stack_a, t_list **stack_b);

void	ft_prevlast(t_list **stack);

#endif
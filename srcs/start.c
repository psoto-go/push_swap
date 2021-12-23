/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:40:22 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/22 19:35:35 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		start_sorting(t_list **stack_a, t_list **stack_b)
{
	int len;

	len = ft_size_stack(*stack_a);
	if (sorted(stack_a, len) == 1)
		exit(0);
	if (len <= 5)
		sort_small_stack(stack_a, stack_b, len);
	// else
	// 	sort_big_stack(stack_a, stack_b, len);
}
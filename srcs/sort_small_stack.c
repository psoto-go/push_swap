/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:31:49 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/23 01:40:32 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_small_stack(t_list **stack_a, t_list ** stack_b, int len)
{
	len = 0;
	// push_b(stack_a, stack_b);
	// push_b(stack_a, stack_b);

	push_b(stack_a, stack_b);
	push_b(stack_a, stack_b);

	// push_b(stack_a, stack_b);
	// if (*(int *)(*stack_a)->content > *(int *)(*stack_a)->next->content)
	// swap(stack_a, 0, 'a');
	// swap_ss(stack_a, stack_b);
	// rotate(stack_a, 'a');
	// rotate_rr(stack_a,stack_b);
	reverse_rotate_rr(stack_a, stack_b);

	// rotate(stack_b, 'b');
	stack_b = 0;

}

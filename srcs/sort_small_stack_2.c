/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:28:24 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/21 12:37:05 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_two(t_list **stack_a)
{
	int	num1;
	int	num2;

	num1 = *(int *)(*stack_a)->content;
	num2 = *(int *)(*stack_a)->next->content;
	if (num1 > num2)
		swap(stack_a, 0, 'a');
}

void	sort_three(t_list **stack_a)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = *(int *)(*stack_a)->content;
	num2 = *(int *)(*stack_a)->next->content;
	num3 = *(int *)(*stack_a)->next->next->content;
	if (num1 > num2 && num2 < num3 && num1 < num3)
		swap(stack_a, 0, 'a');
	else if (num1 > num2 && num1 > num3 && num2 > num3)
	{
		swap(stack_a, 0, 'a');
		reverse_rotate(stack_a, 0, 'a');
	}
	else if (num1 > num2 && num1 > num3 && num2 < num3)
		rotate(stack_a, 0, 'a');
	else if (num1 < num2 && num2 > num3 && num3 > num1)
	{
		swap(stack_a, 0, 'a');
		rotate(stack_a, 0, 'a');
	}
	else if (num1 < num2 && num1 > num3 && num2 > num3)
		reverse_rotate(stack_a, 0, 'a');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:31:49 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/21 12:42:51 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_four(t_list **stack_a)
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;

	num1 = *(int *)(*stack_a)->content;
	num2 = *(int *)(*stack_a)->next->content;
	num3 = *(int *)(*stack_a)->next->next->content;
	num4 = *(int *)(*stack_a)->next->next->next->content;
	if (num1 > num2 && num1 < num3)
		swap(stack_a, 0, 'a');
	else if (num1 > num3 && num1 < num4)
	{
		reverse_rotate(stack_a, 0, 'a');
		swap(stack_a, 0, 'a');
		rotate(stack_a, 0, 'a');
		rotate(stack_a, 0, 'a');
	}
	else if (num1 > num4)
		rotate(stack_a, 0, 'a');
}

void	sort_five_ifs(t_list **stack_a, int n1, int n2, int n3)
{
	int	n4;
	int	n5;

	n4 = *(int *)(*stack_a)->next->next->next->content;
	n5 = *(int *)(*stack_a)->next->next->next->next->content;
	if (n1 > n2 && n1 < n3)
		swap(stack_a, 0, 'a');
	else if (n1 > n3 && n1 < n4)
	{
		swap(stack_a, 0, 'a');
		rotate(stack_a, 0, 'a');
		swap(stack_a, 0, 'a');
		reverse_rotate(stack_a, 0, 'a');
	}
	else if (n1 > n4 && n1 < n5)
	{
		reverse_rotate(stack_a, 0, 'a');
		swap(stack_a, 0, 'a');
		rotate(stack_a, 0, 'a');
		rotate(stack_a, 0, 'a');
	}
	else if (n1 > n5)
		rotate(stack_a, 0, 'a');
}

void	vars_five(t_list **stack_a)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = *(int *)(*stack_a)->content;
	n2 = *(int *)(*stack_a)->next->content;
	n3 = *(int *)(*stack_a)->next->next->content;
	sort_five_ifs(stack_a, n1, n2, n3);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 4)
	{
		push_b(stack_a, stack_b);
		while (!sorted(stack_a, 3))
			sort_three(stack_a);
		push_a(stack_a, stack_b);
		while (!sorted(stack_a, 4))
			sort_four(stack_a);
	}
	else
	{
		push_b(stack_a, stack_b);
		push_b(stack_a, stack_b);
		while (!sorted(stack_a, 3))
			sort_three(stack_a);
		push_a(stack_a, stack_b);
		while (!sorted(stack_a, 4))
			sort_four(stack_a);
		push_a(stack_a, stack_b);
		while (!sorted(stack_a, 5))
			vars_five(stack_a);
	}
}

void	sort_small_stack(t_list **stack_a, t_list **stack_b, int len)
{
	if (len <= 2)
		sort_two(stack_a);
	else if (len <= 3)
	{
		while (!sorted(stack_a, len))
			sort_three(stack_a);
	}
	else
	{
		while (!sorted(stack_a, len))
			sort_five(stack_a, stack_b);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:31:49 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/18 13:46:41 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_two(t_list **stack_a)
{
	int num1;
	int num2;

	num1 = *(int *)(*stack_a)->content;
	num2 = *(int *)(*stack_a)->next->content;
	if (num1 > num2)
		swap(stack_a,0,'a');
}

void	sort_three(t_list **stack_a)
{
	int num1;
	int num2;
	int num3;

	num1 = *(int *)(*stack_a)->content;
	num2 = *(int *)(*stack_a)->next->content;
	num3 = *(int *)(*stack_a)->next->next->content;
	if (num1 > num2 && num2 < num3 && num1 < num3)
		swap(stack_a, 0, 'a');
	else if (num1 > num2 && num1 > num3 && num2 > num3)
	{
		swap(stack_a, 0, 'a');
		reverse_rotate(stack_a, 0 ,'a');
	}
	else if (num1 > num2 && num1 > num3 && num2 < num3)
		rotate(stack_a, 0 , 'a');
	else if (num1 < num2 && num2 > num3 && num3 > num1)
	{
		swap(stack_a, 0, 'a');
		rotate(stack_a, 0 ,'a');
	}
	else if (num1 < num2  && num1 > num3 && num2 > num3)
		reverse_rotate(stack_a, 0 ,'a');
}

void	sort_four(t_list **stack_a)
{
	int num1;
	int num2;
	int num3;
	int num4;

	num1 = *(int *)(*stack_a)->content;
	num2 = *(int *)(*stack_a)->next->content;
	num3 = *(int *)(*stack_a)->next->next->content;
	num4 = *(int *)(*stack_a)->next->next->next->content;
	if (num1 > num2 && num1 < num3)
		swap(stack_a, 0, 'a');
	else if (num1 > num3 && num1 < num4)
	{
		reverse_rotate(stack_a, 0 ,'a');
		swap(stack_a, 0, 'a');
		rotate(stack_a, 0, 'a');
		rotate(stack_a, 0, 'a');
	}
	else if (num1 > num4)
		rotate(stack_a, 0 , 'a');
}

void	sort_five_ifs(t_list **stack_a)
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;

	num1 = *(int *)(*stack_a)->content;
	num2 = *(int *)(*stack_a)->next->content;
	num3 = *(int *)(*stack_a)->next->next->content;
	num4 = *(int *)(*stack_a)->next->next->next->content;
	num5 = *(int *)(*stack_a)->next->next->next->next->content;
	if (num1 > num2 && num1 < num3)
		swap(stack_a, 0, 'a');
	else if (num1 > num3 && num1 < num4)
	{
		swap(stack_a, 0, 'a');
		rotate(stack_a, 0, 'a');
		swap(stack_a, 0, 'a');
		reverse_rotate(stack_a, 0 ,'a');
	}
	else if (num1 > num4 && num1 < num5)
	{
		reverse_rotate(stack_a, 0 ,'a');
		swap(stack_a, 0, 'a');
		rotate(stack_a, 0, 'a');
		rotate(stack_a, 0, 'a');
	}
	else if (num1 > num5)
		rotate(stack_a, 0 , 'a');
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
			sort_five_ifs(stack_a);
	}
}

void	sort_small_stack(t_list **stack_a, t_list ** stack_b, int len)
{
	if (len <= 2)
		sort_two(stack_a);
	else if (len <= 3)
	{
		while (!sorted(stack_a, len))
			sort_three(stack_a);
	}
	// else if (len <= 4)
	// {
	// 	while (!sorted(stack_a, len))
	// 		sort_four(stack_a);
	// }
	else if (len <= 5)
	{
		while (!sorted(stack_a, len))
			sort_five(stack_a, stack_b);
	}
	// swap_ss(stack_a, stack_b);
	// rotate(stack_a, 'a');
	// rotate_rr(stack_a,stack_b);
	// reverse_rotate_rr(stack_a, stack_b);

	// rotate(stack_b, 'b');

}

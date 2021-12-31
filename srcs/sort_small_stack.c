/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:31:49 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/31 02:35:24 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_list **stack_a, t_list ** stack_b)
{
	int num1;
	int num2;
	int num3;

	num1 = *(int *)(*stack_a)->content;
	num2 = *(int *)(*stack_a)->next->content;
	num3 = *(int *)(*stack_a)->next->next->content;
	
	if (num1 < num2 && num3 < num2 && num3 < num1)
		reverse_rotate(stack_a, 0 ,'a');
	else if (num1 > num2 && num1 > num3)
		rotate(stack_a, 0 , 'a');
	else if (num2 > num1 && num2 > num3)
	{
		swap(stack_a, 0, 'a');
		rotate(stack_a, 0 , 'a');

	}
	else if (num1 < num2 && num2 > num3 && num3 < num1)
		reverse_rotate(stack_a, 0 ,'a');
	else if (num1 > num2)
		swap(stack_a, 0, 'a');



	// if (num1 > num2 && num2 < num3 && num3 < num1)
	// else if (num1 < num2 && num2 < num3 && num3 > num1)
	// {
	// 	swap(stack_a, 0, 'a');
	// 	reverse_rotate(stack_a,0,'a');
	// }
	// else if (num1 > num2 && num2 < num3 && num3 > num1)
	// 	rotate(stack_a,0,'a');
	// else if (num1 < num2 && num2 > num3 && num3 < num1)
	// {
	// 	swap(stack_a, 0, 'a');
	// 	rotate(stack_a,0,'a');
	// }
	// else if (num1 < num2 && num2 > num3 && num3 > num1)
	// 	reverse_rotate(stack_a,0,'a');
	stack_b = 0;
}

void	sort_small_stack(t_list **stack_a, t_list ** stack_b, int len)
{
	// push_b(stack_a, stack_b);
	// push_b(stack_a, stack_b);

	// push_b(stack_a, stack_b);
	// push_b(stack_a, stack_b);

	// push_b(stack_a, stack_b);
	if (len == 3)
	{
		while (!sorted(stack_a, 3))
			sort_three(stack_a, stack_b);

	}
	// swap_ss(stack_a, stack_b);
	// rotate(stack_a, 'a');
	// rotate_rr(stack_a,stack_b);
	// reverse_rotate_rr(stack_a, stack_b);

	// rotate(stack_b, 'b');
	stack_b = 0;
	len = 0;

}

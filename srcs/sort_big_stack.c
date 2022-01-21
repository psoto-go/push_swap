/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:47:08 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/21 12:07:12 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_big_stack(t_list **stack_a, t_list **stack_b, int len)
{
	int	num_bits;
	int	i;
	int	num;
	int	j;

	num_bits = 0;
	while ((len - 1) >> num_bits != 0)
		num_bits++;
	i = 0;
	while (i < num_bits)
	{
		j = 0;
		while (j < len)
		{
			num = *(int *)(*stack_a)->content;
			if (((num >> i) & 1) == 1)
				rotate(stack_a, 0, 'a');
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (ft_size_stack(*stack_b) != 0)
			push_a(stack_a, stack_b);
		i++;
	}
}

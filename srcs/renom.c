/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   renom.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:39:40 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/21 12:25:47 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	new_stack(t_list **stack_a, int len, int *copy, int *new_array)
{
	int	i;

	ft_lstclear(stack_a, free);
	i = 0;
	while (i < len)
	{
		ft_lstadd_back(stack_a, new_nodo((void *) &copy[i], sizeof(int)));
		i++;
	}
	free(copy);
	free(new_array);
}

int	give_positions(int *copy, int len, int *new_array)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (copy[i] == new_array[j])
			{
				copy[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (*copy);
}

int	sort_in_array(int len, int *new_array)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	tmp = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (new_array[j] < new_array[i])
			{
				tmp = new_array[j];
				new_array[j] = new_array[i];
				new_array[i] = tmp;
			}
			j++;
		}
		i++;
	}
	return (*new_array);
}

void	renom_nums(t_list **stack_a, int len)
{
	int		*new_array;
	int		*copy;
	int		i;
	t_list	*tmp_lst;

	tmp_lst = *stack_a;
	i = 0;
	new_array = malloc(sizeof(int) * len);
	while (i < len)
	{
		new_array[i] = *(int *)tmp_lst->content;
		tmp_lst = tmp_lst->next;
		i++;
	}
	copy = malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{	
		copy[i] = new_array[i];
		i++;
	}
	sort_in_array(len, new_array);
	give_positions(copy, len, new_array);
	new_stack(stack_a, len, copy, new_array);
}

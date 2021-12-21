/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:36:28 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/21 20:48:21 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			main(int argc, char **argv)
{
	t_list *nuevoNodoA;
	t_list *nuevoNodoB;
	int i;

	i = 1;
	nuevoNodoA = NULL;
	nuevoNodoB = NULL;
	while(i < argc)
	{
		get_contents(argv[i], &nuevoNodoA);
		i++;
	}
	ft_print_stack(nuevoNodoA, nuevoNodoB);
	ft_printf("%d",ft_size_stack(nuevoNodoA));

	// system("leaks push_swap");
}

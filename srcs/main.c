/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:36:28 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/20 18:36:51 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			main(int argc, char **argv)
{
	t_list *nuevoNodo;
	int i;

	i = 1;
	nuevoNodo = NULL;
	if (!argv)
		ft_error(&nuevoNodo);
	while(i < argc)
	{
		get_contents(argv[i], &nuevoNodo);
		i++;
	}
	imprime(nuevoNodo);
	// system("leaks push_swap");
}

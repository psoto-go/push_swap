/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:55:49 by psoto-go          #+#    #+#             */
/*   Updated: 2021/10/07 09:59:14 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t			sum;
	unsigned char	*aux;
	size_t			count;

	sum = num * size;
	aux = malloc(sum);
	count = 0;
	if (!aux)
	{
		return (NULL);
	}
	while (count < sum)
	{
		aux[count] = 0;
		count++;
	}
	return (aux);
}

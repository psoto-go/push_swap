/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:45:38 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/29 11:31:58 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t l)
{
	unsigned char	*temp;
	size_t			count;

	count = 0;
	temp = (unsigned char *) str;
	while (count < l)
	{
		temp[count] = (unsigned char)c;
		count++;
	}
	return (str);
}

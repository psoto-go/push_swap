/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:18:22 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/29 14:11:44 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			count;
	unsigned char	*str1;

	count = 0;
	str1 = (unsigned char *) str;
	while (count < n)
	{
		if (str1[count] == (unsigned char) c)
		{
			return (str1 + count);
		}
		count++;
	}
	return (0);
}

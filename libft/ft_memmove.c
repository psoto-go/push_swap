/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:00:31 by psoto-go          #+#    #+#             */
/*   Updated: 2021/10/13 16:12:12 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	count;

	if (!s1 && !s2)
		return (NULL);
	count = 0;
	if (s1 > s2)
	{
		while (n--)
		{
			(((unsigned char *)s1)[n] = ((unsigned char *)s2)[n]);
		}
	}
	else
	{
		while (count < n)
		{
			(((unsigned char *)s1)[count] = ((unsigned char *)s2)[count]);
			count++;
		}
	}
	return (s1);
}

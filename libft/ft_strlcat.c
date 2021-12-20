/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:44:34 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/29 12:14:32 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	destfin;
	size_t	count;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	destfin = destlen;
	count = 0;
	if (size <= destlen || size == 0)
		return (size + srclen);
	while (count < (size - destlen - 1) && src[count])
	{
		dest[destfin] = src[count];
		count++;
		destfin++;
	}
	dest[destfin] = '\0';
	return (destlen + srclen);
}

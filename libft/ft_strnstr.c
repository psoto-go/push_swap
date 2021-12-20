/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:19:50 by psoto-go          #+#    #+#             */
/*   Updated: 2021/10/05 11:34:51 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	auxlen;

	auxlen = ft_strlen(needle);
	if (auxlen == 0)
		return ((char *)haystack);
	while (len > 0 && *haystack)
	{
		if (*haystack == *needle && auxlen <= len)
		{
			if ((ft_strncmp(haystack, needle, auxlen)) == 0)
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:26:00 by psoto-go          #+#    #+#             */
/*   Updated: 2021/10/13 14:17:36 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	unsigned int	count;
	unsigned int	output;

	output = 0;
	while (source[output] != '\0')
		output++;
	if (size == 0)
		return (ft_strlen(source));
	count = 0;
	while (source[count] != '\0' && count < (size - 1))
	{
		destination[count] = source[count];
		count++;
	}
	destination[count++] = '\0';
	return (output);
}

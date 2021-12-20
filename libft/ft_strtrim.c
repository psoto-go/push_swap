/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:49:43 by psoto-go          #+#    #+#             */
/*   Updated: 2021/10/13 14:14:55 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countset(char s1, char const *set)
{
	int		count;

	count = 0;
	while (set[count] != '\0')
	{
		if (set[count] == s1)
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		count;
	int		i;
	int		j;
	int		c;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	count = ft_strlen(s1);
	j = 0;
	while (s1[i] != '\0' && countset(s1[i], set))
		i++;
	while (i < count && countset(s1[count - 1], set))
		count--;
	tmp = (char *)malloc(((count - i) + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	c = i;
	while (j < (count - i))
		tmp[j++] = s1[c++];
	tmp[j] = '\0';
	return (tmp);
}

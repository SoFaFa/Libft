/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabre <sfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 18:19:59 by sfabre            #+#    #+#             */
/*   Updated: 2020/05/04 18:26:04 by sfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	if (!dest && !src)
		return (0);
	i = ft_strlen(src);
	j = 0;
	if (destsize == 0)
		return (i);
	while (src[j] && j < destsize - 1)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

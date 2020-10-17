/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabre <sfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 18:31:04 by sfabre            #+#    #+#             */
/*   Updated: 2020/05/06 17:31:00 by sfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*ps1;
	char	*ps2;
	int		len;

	ps1 = (char *)s1;
	ps2 = (char *)s2;
	len = ft_strlen(ps2);
	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (ps1[i] != '\0' && (i + len) <= n)
	{
		if (ft_strncmp(s1 + i, s2, len) == 0)
		{
			return (ps1 + i);
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabre <sfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 18:24:16 by sfabre            #+#    #+#             */
/*   Updated: 2020/05/29 16:43:09 by sfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len_s1;
	int		avant;
	int		apres;

	len_s1 = ft_strlen(s1);
	avant = 0;
	apres = 0;
	while (s1[avant] && ft_strchr(set, (int)s1[avant]))
		avant++;
	if (len_s1 - avant <= 0)
		return (ft_substr(s1, 0, 0));
	while (len_s1 - 1 - apres >= 0
			&& ft_strchr(set, (int)s1[len_s1 - 1 - apres]))
		apres++;
	return (ft_substr(s1, avant, len_s1 - avant - apres));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabre <sfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 18:18:43 by sfabre            #+#    #+#             */
/*   Updated: 2020/05/29 17:02:01 by sfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	compteur;
	size_t	taille;
	char	*resultat;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_calloc(1, sizeof(char)));
	taille = ft_strlen(s + start);
	if (taille < len)
		len = taille;
	if (!(resultat = (char *)malloc(sizeof(*resultat) * (len + 1))))
		return (NULL);
	compteur = 0;
	while (compteur < len)
	{
		resultat[compteur] = s[start + compteur];
		compteur++;
	}
	resultat[compteur] = '\0';
	return (resultat);
}

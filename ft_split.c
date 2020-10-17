/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabre <sfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 18:37:59 by sfabre            #+#    #+#             */
/*   Updated: 2020/05/29 17:04:38 by sfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	compteur_mots(const char *s, char c)
{
	int	compteur;
	int	i;

	compteur = 0;
	i = 0;
	if (s[0] != c)
		compteur++;
	while (s[i] && s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			compteur++;
		i++;
	}
	return (compteur);
}

static int	taille_mots(const char *s, char c, int pos)
{
	int compteur;

	compteur = 0;
	while (s[pos + compteur] != c && s[pos + compteur])
		compteur++;
	return (compteur);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (!(tab = (char **)malloc(sizeof(char *) * (compteur_mots(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j] = ft_substr(s, i, taille_mots(s, c, i));
			i = i + taille_mots(s, c, i);
			j++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

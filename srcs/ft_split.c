/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 05:10:58 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/09 17:45:52 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

static char	*ft_strndup(char *src, int n)
{
	int		i;
	char	*copy;

	if (!src)
		return (NULL);
	i = 0;
	if (!(copy = (char *)malloc((n + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < n)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static int	c_w(const char *str, char c)
{
	int	i;
	int	nb_word;

	nb_word = 0;
	if (str[0] != c)
		nb_word++;
	i = 1;
	while (str[i])
	{
		if (str[i] != c && str[i - 1] == c)
			nb_word++;
		i++;
	}
	return (nb_word);
}

static char	**split_free(char **tab, int k)
{
	while (k)
	{
		free(tab[k]);
		k--;
	}
	free(tab);
	return (0);
}

char		**ft_split(char const *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (!str || !(tab = (char **)malloc((c_w(str, c) + 1) * sizeof(char *))))
		return (0);
	k = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] != c)
			j++;
		if (j)
		{
			if (!(tab[k++] = ft_strndup((char *)&str[i], j)))
				return (split_free(tab, k - 2));
			i = i + j;
		}
		if (str[i])
			i++;
	}
	tab[k] = 0;
	return (tab);
}

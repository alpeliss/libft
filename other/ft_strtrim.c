/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 16:47:31 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/06 17:16:01 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_in_set(char const *set, char c)
{
	int	i;

	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		return (0);
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*res;

	if (!s1)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		if (!is_in_set(set, s1[i]))
			j++;
	if (!(res = (char *)malloc((j + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!is_in_set(set, s1[i]))
			res[j++] = s1[i];
		i++;
	}
	res[j] = '\0';
	return (res);
}

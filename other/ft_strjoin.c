/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 16:36:54 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/06 16:42:30 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		j_len(char const *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	if (!(res = (char *)malloc((j_len(s1) + j_len(s2) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	if (s1)
		while (s1[i])
		{
			res[i] = s1[i];
			i++;
		}
	j = 0;
	if (s2)
		while (s2[j])
		{
			res[i + j] = s2[j];
			j++;
		}
	res[i + j] = '\0';
	return (res);
}

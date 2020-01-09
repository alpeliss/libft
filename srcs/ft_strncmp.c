/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 11:02:45 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/09 14:51:38 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if ((!s1 && !s2) || n <= 0)
		return (0);
	else if (!s1)
		return (-s2[0]);
	else if (!s2)
		return (s1[0]);
	i = 0;
	while (i < n - 1 && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		i++;
	}
	return (abs(s1[i]) - abs(s2[i]));
}

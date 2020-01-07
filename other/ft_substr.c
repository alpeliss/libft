/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:50:08 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/06 16:36:46 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	if (!(res = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	if (start > i)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

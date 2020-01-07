#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dst;
	i = 0;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}

#include "stdio.h"
#include "string.h"
#include "includes/libft.h"

char	*init_str(int a)
{
	char	*str;
	int	i;

	str = (char *)malloc((a + 1) * sizeof(char));
	i = 0;
	while (i < a)
		str[i++] = '_';
	str[i] = '\0';
	return (str);
}

int	 main()
{
	char	*a;
	char	*b;
	char	*c;

	a = init_str(10);
	b = init_str(10);
	printf("-%s-\n-%s-\n\n", a, b);

	a = memset(a, 42, 14);
	b = ft_memset(b, 42, 14);
	printf("-%s-\n-%s-\n\n", a, b);

	bzero(a, 0);
	ft_bzero(b, 0);
	printf("-%s-\n-%s-\n\n", a, b);

	c = init_str(5);
	memcpy(a, c, 0);
	ft_memcpy(b, c, 0);
	printf("-%s-\n-%s-\n\n", a, b);

	printf("-%s-\n-%s-\n", memccpy(a, c, '_', 7), ft_memccpy(b, c, '_', 7));
	printf("-%s-\n-%s-\n\n", a, b);
}

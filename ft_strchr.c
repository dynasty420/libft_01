/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:46:30 by yut               #+#    #+#             */
/*   Updated: 2023/08/03 18:56:17 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	size_t	i;

	a = (char)c;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == a)
		return ((char *)&s[i]);
	return (NULL);
}

int	main(void)
{
	char *c = NULL;
	// char *d = "abc";
	// char *e = "abc";
	// char *f = "abc";
	char *a = ft_strchr(c, 'b');
	// char *b = ft_strchr(d, 'b');

	printf("%p\n", a);
	// printf("%p\n", b);
	// printf("%p\n", c);
	// printf("%p\n", d);
}
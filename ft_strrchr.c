/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:46:30 by yut               #+#    #+#             */
/*   Updated: 2023/08/03 18:56:19 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	size_t	i;
	char	*tmp;

	a = (char)c;
	i = 0;
	tmp = NULL;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == a)
			tmp = ((char *)&s[i]);
		i++;
	}
	if (s[i] == a)
		tmp = ((char *)&s[i]);
	return (tmp);
}

int	main(void)
{
	char *c = "abcb";
	char *d = "abcb";
	// char *e = "abc";
	// char *f = "abc";
	char *a = strrchr(c, 'b');
	char *b = ft_strrchr(d, 'b');
	char *e = strrchr(c, 'a');
	char *f = ft_strrchr(d, 'a');

	// char *g = strrchr(NULL, 'b');
	char *h = ft_strrchr(NULL, 'b');
	char *i = strrchr(c, 'a');
	char *j = ft_strrchr(d, 'a');
	

	printf("%p\n", a);
	printf("%p\n", b);
	printf("%s\n", (char *)a);
	printf("%s\n", (char *)b);

	printf("%p\n", e);
	printf("%p\n", f);
	printf("%s\n", (char *)e);
	printf("%s\n", (char *)f);
	
	// printf("%p\n", g);
	printf("%p\n", h);
	printf("%s\n", i);
	printf("%s\n", j);
}

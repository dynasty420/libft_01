/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:54:47 by yut               #+#    #+#             */
/*   Updated: 2023/08/02 16:22:09 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s;

	i = 0;
	tmp_s = (unsigned char *)s;
	while (i < n)
	{
		if (tmp_s[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *s = calloc(30, sizeof(char));

// 	printf("%p\n", memchr(s, '\0', 30));
// 	printf("%p\n", ft_memchr(s, '\0', 30));

// 	memcpy(s, "libft-test-tokyo", 30);

// 	printf("%p\n", memchr(s, 't', 30));
// 	printf("%p\n", ft_memchr(s, 't', 30));

// 	printf("%s\n", (char *)memchr(s, 't', 30));
// 	printf("%s\n", (char *)ft_memchr(s, 't', 30));

// 	char *t = calloc(30, sizeof(char));
// 	memcpy(t, "libft-test-tokyo", 17);

// 	printf("%p\n", strchr(t, 't'));
// 	printf("%p\n", ft_strchr(t, 't'));

// 	printf("%s\n", strchr(t, 't'));
// 	printf("%s\n", ft_strchr(t, 't'));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:54:47 by yut               #+#    #+#             */
/*   Updated: 2023/07/28 13:58:37 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*tmp_s;

	i = 0;
	tmp_s = (const unsigned char *)s;
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
// 	// s = "libft-test-tokyo\0\0\0acdfg\0\0\0\0\0"
// 	char *s = calloc(30, sizeof(char));
// 	memcpy(s, "libft-test-tokyo", 17);
// 	memcpy(s + 20, "acdfg", 5);
// 	printf("%p\n",memchr(s, 't', 30));
// 	printf("%p\n",ft_memchr(s, 't', 30));

//     //  memchr(s, 'l', 30));
// }
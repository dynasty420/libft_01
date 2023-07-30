/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:01:59 by yut               #+#    #+#             */
/*   Updated: 2023/07/30 23:11:12 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (haystack == NULL)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len && haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*j;
// 	char		*a;
// 	char		*b;

// 	// char i[1024] = "ABCDEE";
// 	j = "ABCDEE";
// 	a = strnstr(NULL, '\0', 0);
// 	b = ft_strnstr(NULL, '\0', 0);
// 	printf("a:%s\nb:%s\n", a, b);
// 	return (0);
// }

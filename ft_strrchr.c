/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:46:30 by yut               #+#    #+#             */
/*   Updated: 2023/07/30 23:07:56 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	size_t	i;
	char	*adress;

	a = (char)c;
	i = 0;
	adress = NULL;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == a)
			adress = ((char *)&s[i]);
		i++;
	}
	if (s[i] == a)
		adress = ((char *)&s[i]);
	return (adress);
}

// int main()
// {
//     char *c = "abcb";
//     char *d = "abcb";
//     // char *e = "abc";
//     // char *f = "abc";
//     char *a = strrchr(c, 'z');
//     char *b = ft_strrchr(d, 'z');

//     printf("%p\n",a);
//     printf("%p\n",b);
//     printf("%p\n",c);
//     printf("%p\n",d);
// }
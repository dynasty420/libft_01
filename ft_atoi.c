/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:18:37 by yut               #+#    #+#             */
/*   Updated: 2023/08/01 11:53:58 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_max_atoi(const char *str_max);
static long	ft_min_atoi(const char *str_min);
int			ft_isdigit(int c);

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;

	if (str == NULL && str[0] == '\0')
		return (0);
	sign = 1;
	i = 0;
	while ()
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1 * sign;
		i++;
	}
	if (sign == 1)
		return ((int)ft_max_atoi(&str[i]));
	else
		return ((int)ft_min_atoi(&str[i]));
	return (0);
}

static long	ft_max_atoi(const char *str_max)
{
	size_t		j;
	long long	result;

	j = 0;
	result = 0;
	while (ft_isdigit(str_max[j]) != 0)
	{
		if (result > LONG_MAX / 10)
			return (LONG_MAX);
		if (result * 10 > LONG_MAX - (str_max[j] - '0'))
			return (LONG_MAX);
		result = result * 10 + str_max[j] - '0';
		j++;
	}
	return (result);
}

static long	ft_min_atoi(const char *str_min)
{
	size_t		k;
	long long	result;

	k = 0;
	result = 0;
	while (ft_isdigit(str_min[k]) != 0)
	{
		if (result < LONG_MIN / 10)
			return (LONG_MIN);
		if (result * 10 < LONG_MIN + (str_min[k] - '0'))
			return (LONG_MIN);
		result = result * 10 - (str_min[k] - '0');
		k++;
	}
	return (result);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isspace(int c)
{
	str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r'
}

// int	main(void)
// {
// 	char	*s;
// 	char	*t;
// 	char	*u;
// 	char	*o;
// 	char	*p;
// 	char	*q;

// 	// s = "libft-test-tokyo\0\0\0acdfg\0\0\0\0\0"
// 	s = calloc(30, sizeof(char));
// 	t = calloc(30, sizeof(char));
// 	u = calloc(30, sizeof(char));
// 	o = calloc(30, sizeof(char));
// 	p = calloc(30, sizeof(char));
// 	q = calloc(30, sizeof(char));
// 	memcpy(s, "++194328", 8);
// 	memcpy(t, "+-194328", 8);
// 	memcpy(u, " -194328", 8);
// 	memcpy(o, "++194328", 8);
// 	memcpy(p, "+-194328", 8);
// 	memcpy(q, " -194328", 8);
// 	// printf("%p\n",ft_atoi(s));
// 	printf("%d\n", atoi(s));
// 	printf("%d\n", atoi(t));
// 	printf("%d\n", atoi(u));
// 	printf("%d\n", ft_atoi(o));
// 	printf("%d\n", ft_atoi(p));
// 	printf("%d\n", ft_atoi(q));
// }

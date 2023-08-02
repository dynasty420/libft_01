/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:55:00 by yut               #+#    #+#             */
/*   Updated: 2023/08/02 15:16:39 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_plus_atoi(const char *str_plus);
static long	ft_minus_atoi(const char *str_minus);
int			ft_isdigit(int c);
int			ft_isspace(int c);

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;

	sign = 1;
	i = 0;
	while (ft_isspace(str[i]) != 0)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1 * sign;
		i++;
	}
	if (sign == 1)
		return ((int)ft_plus_atoi(&str[i]));
	else
		return ((int)ft_minus_atoi(&str[i]));
	return (0);
}

static long	ft_plus_atoi(const char *str_max)
{
	size_t		i;
	long long	result;

	i = 0;
	result = 0;
	while (ft_isdigit(str_max[i]) != 0)
	{
		if (result > (LONG_MAX - (str_max[i] - '0')) / 10)
			return (LONG_MAX);
		result = result * 10 + str_max[i] - '0';
		i++;
	}
	return (result);
}

static long	ft_minus_atoi(const char *str_minus)
{
	size_t		i;
	long long	result;

	i = 0;
	result = 0;
	while (ft_isdigit(str_minus[i]) != 0)
	{
		if (result < (LONG_MIN + (str_minus[i] - '0')) / 10)
			return (LONG_MIN);
		result = result * 10 - (str_minus[i] - '0');
		i++;
	}
	return (result);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

// #include <limits.h>

// int	main(void)
// {
// 	char	*s;
// 	char	*t;
// 	char	*u;
// 	char	*o;
// 	char	*p;
// 	char	*q;
// 	char	*r;
// 	char	*v;
// 	char	*w;
// 	char	*x;
// 	char	*y;
// 	char	*z;
// 	char	*i;

// 	s = calloc(100, sizeof(char));
// 	t = calloc(100, sizeof(char));
// 	u = calloc(100, sizeof(char));
// 	o = calloc(100, sizeof(char));
// 	p = calloc(100, sizeof(char));
// 	q = calloc(100, sizeof(char));
// 	r = calloc(100, sizeof(char));
// 	v = calloc(100, sizeof(char));
// 	w = calloc(100, sizeof(char));
// 	x = calloc(100, sizeof(char));
// 	y = calloc(100, sizeof(char));
// 	z = calloc(100, sizeof(char));
// 	i = calloc(100, sizeof(char));

// 	memmove(s, "-18446744073709551614", 100);
// 	memmove(t, "18446744073709551614", 100);
// 	memmove(u, "\n19100", 100);
// 	memmove(o, "-+19432100", 100);
// 	memmove(p, "+-19432100", 100);
// 	memmove(q, " -19432100", 100);
// 	memmove(r, "++19432100",100);
// 	memmove(v, "INT_MAX - 10lu", 100);
// 	memmove(w, "INT_MAX ", 100);
// 	memmove(x, "LONG_MAX", 100);
// 	memmove(y, "LONG_MIN", 100);
// 	memmove(z, "1028321832182318231", 100);
// 	// memmove(i, NULL, 100);

// 	// printf("libc:%d\n", atoi(NULL));
// 	// printf("%d\n", ft_atoi(NULL));

// 	printf("libc:%d\n", atoi(s));
// 	printf("%d\n", ft_atoi(s));

// 	printf("libc: %d\n", atoi(t));
// 	printf("%d\n", ft_atoi(t));

// 	printf("libc:%d\n", atoi(u));
// 	printf("%d\n", ft_atoi(u));

// 	printf("libc:%d\n", atoi(o));
// 	printf("%d\n", ft_atoi(o));

// 	printf("libc:%d\n", atoi(p));
// 	printf("%d\n", ft_atoi(p));

// 	printf("libc:%d\n", atoi(q));
// 	printf("%d\n", ft_atoi(q));

// 	printf("libc:%d\n", atoi(r));
// 	printf("%d\n", ft_atoi(r));

// 	printf("INT_MAX;libc:%d\n", atoi(v));
// 	printf("%d\n", ft_atoi(v));

// 	printf("+LONG_MAX;libc:%d\n", atoi(w));
// 	printf("%d\n", ft_atoi(w));

// 	printf("libc:%d\n", atoi(x));
// 	printf("%d\n", ft_atoi(x));

// 	printf("libc:%d\n", atoi(y));
// 	printf("%d\n", ft_atoi(y));

// 	printf("libc:%d\n", atoi(z));
// 	printf("%d\n", ft_atoi(z));

// 	printf("libc:%d\n", atoi(i));
// 	printf("%d\n", ft_atoi(i));

// 	free(s);
// 	free(t);
// 	free(u);
// 	free(o);
// 	free(p);
// 	free(q);
// 	free(r);
// 	free(v);
// 	free(w);
// 	free(x);
// 	free(y);
// 	free(z);
// 	free(i);
// 	return (0);
// }

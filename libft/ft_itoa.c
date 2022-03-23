/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:21:09 by aarsenio          #+#    #+#             */
/*   Updated: 2022/03/12 16:21:13 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numb(int n)
{
	int	res;

	res = 0;
	if (n <= 0)
	{
		n *= -1;
		res++;
	}
	while (n >= 1)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numb(n);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
	}
	while (n > 0)
	{
		len--;
		s[len] = ((n % 10) + '0');
		n = n / 10;
	}
	return (s);
}

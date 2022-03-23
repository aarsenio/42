/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:00:22 by aarsenio          #+#    #+#             */
/*   Updated: 2022/03/08 14:31:03 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s2[i] && s1[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
	}
	if (s1[i] != s2[i] && i < n)
	{
		return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
	}
	return (0);
}

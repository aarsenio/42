/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:53:55 by aarsenio          #+#    #+#             */
/*   Updated: 2022/03/15 16:58:47 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((char *)(str + i));
		}
		i--;
	}
	return (NULL);
}

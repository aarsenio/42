/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:41:40 by aarsenio          #+#    #+#             */
/*   Updated: 2022/03/08 16:02:16 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		x = 0;
		while (haystack[i + x] == needle[x] && (i + x) < len)
		{
			if (haystack[i + x] == '\0' && needle[x] == '\0')
				return ((char *)haystack + i);
			x++;
		}
		if (needle[x] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

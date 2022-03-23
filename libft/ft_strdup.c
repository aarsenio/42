/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:14:21 by aarsenio          #+#    #+#             */
/*   Updated: 2022/03/09 14:39:08 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!s2)
	{
		return (NULL);
	}
	ft_memmove(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}

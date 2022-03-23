/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:59:55 by aarsenio          #+#    #+#             */
/*   Updated: 2022/03/08 12:37:46 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	if (dstsize <= ft_strlen(dst))
	{
		return (dstsize + ft_strlen(src));
	}
	else
	{
		i = ft_strlen(dst);
		x = 0;
		while (i < dstsize - 1 && src[x] != '\0')
		{
			dst[i] = src[x];
			i++;
			x++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(dst) + ft_strlen(&src[x]));
}

/*int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 123;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}*/

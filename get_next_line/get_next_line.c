/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:05:58 by aarsenio          #+#    #+#             */
/*   Updated: 2022/03/29 13:24:04 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*line;
	int			i;
	int			docsize;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) == -1)
		return (0);
	line = NULL;
	i = 1;
	while (i)
	{
		docsize = 1;
		if (!buffer[0])
			docsize = read(fd, buffer, BUFFER_SIZE);
		i = (check_line_end(buffer) && docsize > 0);
		if (docsize > 0)
			line = get_line(line, buffer);
		ft_clean_buff(buffer);
	}
	return (line);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimonov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 15:55:34 by nsimonov          #+#    #+#             */
/*   Updated: 2017/01/29 16:51:48 by nsimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# define BUFF_SIZE 5

typedef struct	s_mylist
{
	char		*buff;
}				t_mylist;

int				get_next_line(int const fd, char **line);

#endif

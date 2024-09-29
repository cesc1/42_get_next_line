/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguirre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:30:41 by faguirre          #+#    #+#             */
/*   Updated: 2024/09/28 13:11:31 by faguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

typedef struct s_static
{
	ssize_t	pos0;
	ssize_t	pos1;
	ssize_t	bytes_loaded;
	char	buffer[BUFFER_SIZE + 1];
}	t_static;

char	*get_next_line(int fd);
char	*strjoin_free(char *str1, char *str2, unsigned int num_free);
char	*ft_substr(char const *s, unsigned int start, size_t len);
ssize_t	find_pos(char *str, char c, ssize_t pos);
ssize_t	load_buffer(int fd, t_static *s, char **line);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*calc_line(t_static *s, int fd, char *line);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguirre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:30:41 by faguirre          #+#    #+#             */
/*   Updated: 2024/09/29 10:32:38 by faguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <sys/types.h>

# ifndef MAX_FILES_OPEN
#  define MAX_FILES_OPEN 1024
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

typedef struct s_static
{
	ssize_t	pos0;
	ssize_t	pos1;
	ssize_t	bytes_loaded;
	char	*buffer;
	int		init_if;
}	t_static;

char	*get_next_line(int fd);
char	*strjoin_free(char *str1, char *str2, unsigned int num_free);
char	*ft_substr(char const *s, unsigned int start, size_t len);
ssize_t	find_pos(char *str, char c, ssize_t pos);
ssize_t	load_buffer(int fd, t_static *s, char **line);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*calc_line(t_static *s, int fd, char *line);
void	initialize_static(t_static store[BUFFER_SIZE]);

#endif

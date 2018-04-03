//
// Created by joffr on 03/04/2018.
//

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 50

# define MALLCHECK(x) if (!x) return (-1);

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int		get_next_line(const int fd, char **line);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
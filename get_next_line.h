#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *t);
char	*ft_strdup(const char *s1);
int		get_next_line(int fd, char **line);
char	*ft_strjoin(char const *s1, char const *s2);

#endif

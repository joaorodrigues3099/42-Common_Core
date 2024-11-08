#ifndef GET_NEXT_LINE_BONUS_H
#define GET_NEXT_LINE_BONUS_H

#include <stdlib.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1069
#endif

#ifndef FD_MAX
#define FD_MAX 69
#endif

char	*ft_strchr(const char *str, char c);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(char *s1, char *s2);

char	*get_next_line(int fd);

#endif //GET_NEXT_LINE_BONUS_H

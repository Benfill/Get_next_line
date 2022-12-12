#ifndef GET_NEXT_LINE
#define GET_NEXT_LINE

#define BUFF_SIZE
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


char    *get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *str, int c);
int	ft_isascii(int c);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:28:49 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/19 17:04:57 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char            buff[BUFF_SIZE + 1];
    static char *str;
    char    *line;
    char *ptr;
    int     reaad;

    str = NULL;
    if ()
    while (reaad > 0)
    {
        reaad = read(fd, buff, BUFF_SIZE);
        if (reaad < 0)
            return (NULL);
        buff[reaad] = '\0';
        ptr = str;
        str = ft_strjoin(ptr, buff)
        free(ptr);
        if (ft_strchr(str, '\n'))
            break ;
    }
    *line = 
    ptr = str;
    str = (ptr)
    free(ptr)
    if (reaad == 0 && str[0] == 0)
    {
        free(*str);
        *str = NULL;
    }
    
    return (reead);
}

// there is one condition missing (str[0] == '\n')
int main()
{
    int fd = open("test.txt", O_RDONLY);
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
}
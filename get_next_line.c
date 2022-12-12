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

int newline_checker(char *str)
{
    size_t i = 0;

    while (str[i++])
    {
        if (str[i] == 10)
            return (i);
    }
    if (i == ft_strlen(str))
        return (ft_strlen(str));
    return (0);
}

char    *get_next_line(int fd)
{
    char            buff[BUFF_SIZE + 1];
    char     *nl;
    static char *ptr;
    char *str;
    int     reaad;
    size_t     i;

    if (fd == -1)
        return (0);
    str = (char *) malloc(BUFF_SIZE);
    if (!str)
        return (0);
    if (ptr != 0)
        str = ptr;
    ptr = 0;
    i = 0;
    while ((reaad = read(fd, buff, BUFF_SIZE)) > 0)
    {
        // printf("%s\n", buff);
        str = ft_strjoin(str, buff);
        if ((i = newline_checker(str)) > 0)
        {
            nl = ft_substr(str, 0, i + 1);
            ptr = &str[i + 1];
            // printf("(%s)\n", ptr);
            free(str);
            return nl;
        }
        else if (reaad < BUFF_SIZE)
        {
            nl = ft_substr(str, 0, ft_strlen(str) - (BUFF_SIZE - reaad + 1));
            free(str);
            return nl;
        }
        // else if (str[0] == '\n')
        //     printf("(%zu)\n", i);    
    }
    if (reaad == 0 && ft_isascii(str[0]) != 0)
    {
        i = BUFF_SIZE - ft_strlen(str);
        str[ft_strlen(str) - (i + 1)] = '\n';
        // printf("%zu", ft_strlen(str));
        return (str);
    }
    return 0;
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
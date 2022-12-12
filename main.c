// int newline(int fd, char *str)
// {
//     int i = 0;

//     while (str[i++])
//     {
//         if (str[i] == 10)
//             return (i);
//     }
//     return (0);
// }

// #include    <fcntl.h>

// int     main()
// {
//     int fd = open("test.txt", O_RDONLY);
//     int reaad = read(fd, buff, 5);
//     printf("%i", newline(fd ));
// }
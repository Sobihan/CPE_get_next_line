/*
** EPITECH PROJECT, 2018
** getnxtline
** File description:
** functions
*/

#include "get_next_line.h"

char *buffer(int fd)
{
    char *buffer = malloc(sizeof(char) * (READ_SIZE + 1));
    int ret;

    ret = read(fd, buffer, 130000000000000);
    return (buffer);
}

int my_strlen(int i, char *buffer)
{
    while (buffer [i] != '\n' && buffer[i] != '\0')
        i = i + 1;
    return (i);
}

char *get_next_line(int fd)
{
    static char *buf = NULL;
    static int start = 0;
    static int end = 0;
    char *return_buf;
    int i = 0;

    if (fd <= -1)
        return (NULL);
    if (buf == NULL)
        buf = buffer(fd);
    end = my_strlen(end, buf);
    return_buf = malloc(sizeof(char) * (end - start));
    while (start < end) {
        return_buf[i] = buf[start];
        start = start + 1;
        i = i + 1;
    }
    return_buf[i] = '\0';
    start = start + 1;
    end = end + 1;
    return (return_buf);
}

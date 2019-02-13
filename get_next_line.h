/*
** EPITECH PROJECT, 2019
** get_next_line.h
** File description:
** gnl
*/

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef READ_SIZE                                                                                                                                                                                                
#define READ_SIZE (250)                                                                                                                                                                                           
#endif

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

char *buffer(int fd);
int my_strlen(int i, char *buffer);
char *get_next_line(int fd);

#endif

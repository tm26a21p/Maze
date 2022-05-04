/*
** EPITECH PROJECT, 2021
** load_file_in_mem.c
** File description:
** load a map content in memory
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char *load_file_in_mem(char const *filepath)
{
    struct stat sb;
    int fd = open(filepath, O_RDONLY);
    char *buffer = NULL;

    if (fd < 0 || stat(filepath, &sb) == -1 || !S_ISREG(sb.st_mode))
        return NULL;
    buffer = malloc(sizeof(char) * (sb.st_size + 1));
    if (read(fd, buffer, sb.st_size) < sb.st_size || sb.st_size == 0)
        return NULL;
    close(fd);
    buffer[sb.st_size] = '\0';
    return buffer;
}
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, or 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t nread, nwrite;
    char *buffer;

    if (filename == NULL)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        free(buffer);
        return (0);
    }

    nread = read(fd, buffer, letters);
    if (nread == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    nwrite = write(STDOUT_FILENO, buffer, nread);
    if (nwrite == -1 || nwrite != nread)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);
    return (nwrite);
}


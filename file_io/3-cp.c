#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - copies the content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, nread, nwrite;
    char buffer[1024];

    /* Error if the number of arguments is incorrect */
    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /* Open the source file for reading */
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Open the destination file for writing (create it if it doesn't exist) */
    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    /* Read from the source file and write to the destination file */
    while ((nread = read(fd_from, buffer, 1024)) > 0)
    {
        nwrite = write(fd_to, buffer, nread);
        if (nwrite == -1)
        {
            dprintf(2, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    /* Check if reading from the source file failed */
    if (nread == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Close the file descriptors */
    if (close(fd_from) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return (0);
}


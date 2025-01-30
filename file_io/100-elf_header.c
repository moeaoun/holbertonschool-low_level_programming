#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_elf_header - Prints the ELF header information.
 * @e_ident: Pointer to the ELF identifier array.
 */
void print_elf_header(unsigned char *e_ident)
{
    int i;

    /* Magic */
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", e_ident[i]);
    printf("\n");

    /* Class */
    printf("  Class:                             ");
    if (e_ident[EI_CLASS] == ELFCLASS64)
        printf("ELF64\n");
    else if (e_ident[EI_CLASS] == ELFCLASS32)
        printf("ELF32\n");
    else
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);

    /* Data */
    printf("  Data:                              ");
    if (e_ident[EI_DATA] == ELFDATA2LSB)
        printf("2's complement, little endian\n");
    else if (e_ident[EI_DATA] == ELFDATA2MSB)
        printf("2's complement, big endian\n");
    else
        printf("<unknown: %x>\n", e_ident[EI_DATA]);

    /* Version */
    printf("  Version:                           %d (current)\n", e_ident[EI_VERSION]);

    /* OS/ABI */
    printf("  OS/ABI:                            ");
    if (e_ident[EI_OSABI] == ELFOSABI_SYSV)
        printf("UNIX - System V\n");
    else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
        printf("UNIX - NetBSD\n");
    else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
        printf("UNIX - Solaris\n");
    else
        printf("<unknown: %x>\n", e_ident[EI_OSABI]);

    /* ABI Version */
    printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);

    /* Type */
    printf("  Type:                              ");
    if (e_ident[EI_TYPE] == ET_EXEC)
        printf("EXEC (Executable file)\n");
    else if (e_ident[EI_TYPE] == ET_DYN)
        printf("DYN (Shared object file)\n");
    else
        printf("<unknown: %x>\n", e_ident[EI_TYPE]);

    /* Entry point address */
    printf("  Entry point address:               0x%lx\n", *((unsigned long *)(e_ident + 24)));
}

/**
 * main - Displays the ELF header information of a file.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exits with code 98 on failure.
 */
int main(int argc, char *argv[])
{
    int fd;
    unsigned char e_ident[EI_NIDENT];

    if (argc != 2)
    {
        dprintf(2, "Usage: elf_header elf_filename\n");
        exit(97);
    }

    /* Open the ELF file */
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Read the ELF identification */
    if (read(fd, e_ident, EI_NIDENT) != EI_NIDENT)
    {
        dprintf(2, "Error: Can't read ELF header\n");
        exit(98);
    }

    /* Check if it's an ELF file */
    if (e_ident[0] != 0x7f || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
    {
        dprintf(2, "Error: Not an ELF file\n");
        exit(98);
    }

    /* Print the ELF header */
    printf("ELF Header:\n");
    print_elf_header(e_ident);

    /* Close the file */
    close(fd);

    return (0);
}


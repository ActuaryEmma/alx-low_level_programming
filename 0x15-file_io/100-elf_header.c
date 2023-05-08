#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * error_exit - prints an error message and exits with the given code
 * @message: error message to be printed
 */
void error_exit(const char *message)
{
    fprintf(stderr, "%s\n", message);
    exit(98);
}

/**
 * print_elf_header_info - displays the information from the ELF header
 * @header: pointer
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf(" %.2x", header->e_ident[i]);
    printf("\n");
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Others");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" :
                                                        header->e_type == ET_DYN ? "DYN (Shared object file)" :
                                                        header->e_type == ET_REL ? "REL (Relocatable file)" :
                                                        "Others");
    printf("  Entry point address:               %lx\n", header->e_entry);
}

/**
 * main - entry point
 * @argc: number of arguments on the command line
 * @argv: array on the command line of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
        error_exit("Usage: elf_header elf_filename");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        error_exit("Error: Cannot open file");

    if (read(fd, &header, sizeof(header)) != sizeof(header))
        error_exit("Error: Cannot read ELF header");

    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
        error_exit("Error: Not an ELF file");

    print_elf_header_info(&header);

    if (close(fd) == -1)
        error_exit("Error: Cannot close file");

    return 0;
}

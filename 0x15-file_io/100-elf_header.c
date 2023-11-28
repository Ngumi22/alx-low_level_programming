#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * display_elf_header - Display information contained in the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void display_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x", header->e_ident[i]);
		if (i < EI_NIDENT - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	printf("Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32)
			? "ELF32" : "ELF64");
	printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement,little endian" : "2's complement, big endian");
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" :
			(header->e_type == ET_DYN) ? "DYN (Shared object file)" :
			(header->e_type == ET_REL) ?
			"REL (Relocatable file)" : "UNKNOWN");
	printf("Entry point address: %lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("Error");
		exit(98);
	}
	Elf64_Ehdr elf_header;

	bytes_read = read(fd, &elf_header, sizeof(elf_header));

	if (bytes_read != sizeof(elf_header) || elf_header.e_ident[EI_MAG0] != ELFMAG0
			|| elf_header.e_ident[EI_MAG1] != ELFMAG1
			|| elf_header.e_ident[EI_MAG2] != ELFMAG2
			|| elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}
	display_elf_header(&elf_header);
	close(fd);
	return (0);
}

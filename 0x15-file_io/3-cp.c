#include "holberton.h"

/**
 * main - Copy the content of a file in another file.
 * @argc: How many arguments.
 * @argv: Pointer to the arguments (all are strings).
 * Return: return 0 if is succes.
 */
int main(int argc, char *argv[])
{
	int fgto, fgfrom, check_close_from, check_close_to;
	char *buffer;
	ssize_t checker_write, checker_read;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]), exit(97);
	buffer = malloc(1024);
	fgfrom = open(argv[1], O_RDONLY);
	if (fgfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fgto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fgto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	checker_read = read(fgfrom, (char *)buffer, 1024);
	if (checker_read > 0)
	{
		checker_write = write(fgto, buffer, checker_read);
		if (checker_write != checker_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (checker_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	check_close_from = close(fgfrom);
	if (check_close_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fgfrom), exit(100);
	check_close_to = close(fgto);
	if (check_close_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fgto), exit(100);
	free(buffer);
	return (0);
}

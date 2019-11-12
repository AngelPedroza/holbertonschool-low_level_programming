#include "holberton.h"

/**
 * _strlen - Give the len of a string.
 * @str: My string.
 * Return: My len of string.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * read_textfile - Read and print a text file.
 * @filename: My file.
 * @letters: My size of print.
 * Return: The size of the print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fg, len;
	char *buff;
	ssize_t i;

	buff = malloc(letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}

	fg = open(filename, O_RDONLY);
	if (fg == -1)
		return (0);

	i = read(fg, (char *)buff, letters);
	if (i == -1)
		return (0);

	len = _strlen(buff);

	i = write(STDOUT_FILENO, buff, len);
	if (i == -1)
	{
		free(buff);
		return (0);
	}
	close(fg);
	free(buff);
	return (i);
}

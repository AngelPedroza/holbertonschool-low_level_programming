#include "holberton.h"

/**
 * _strlen - Give me the len of a string..
 * @str: My string.
 * Return: The len.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * append_text_to_file - Write after to the first write in a file.
 * @filename: Name of the file.
 * @text_content: The content of the file.
 * Return: 1 if is succes or -1 if it fail..
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int fg, len;
		char *buffer;
		ssize_t i, w;

		buffer = malloc(1024);
		if (!*argv[1])
			return (-1);
		fg = open(argv[1], O_RDONLY);
		if (fg == -1)
			return (-1);
		if (!*argv[2])
			return (close(fg) == -1 ? -1 : 1);

		/*read from*/
		i = read(fg, (char *)buffer, 1024);
		if (i == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file ");
			dprintf(STDERR_FILENO, "%s\n", argv[1]);
			exit(98);
		}
		close(fg);

		/*write to*/
		fg = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fg == -1)
			return (-1);
		len = _strlen(buffer);
		buffer[len] = '\n';
		w = write(fg, buffer, len);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		free(buffer);
		return (1);
	}
	dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
	exit(97);
}

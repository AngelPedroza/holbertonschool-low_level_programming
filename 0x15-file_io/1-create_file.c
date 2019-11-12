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
 * create_file - check the code for Holberton School students.
 * @filename: The name of the file thats I will craate.
 * @text_content: The content of the file thats I created.
 * Return: 1 if is succes or -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fg, len, w;

	if (!filename)
		return (-1);

	fg = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fg == -1)
		return (-1);
	if (!text_content)
		return (close(fg) == -1 ? -1 : 1);

	/* write momment */
	len = _strlen(text_content);
	w = write(fg, text_content, len);
	if (w == -1)
		return (-1);
	return (1);
}

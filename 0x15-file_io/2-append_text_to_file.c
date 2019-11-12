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
int append_text_to_file(const char *filename, char *text_content)
{
	int fg, len, w;

	if (!filename)
		return (-1);

	fg = open(filename, O_WRONLY | O_APPEND);
	if (fg == -1)
		return (-1);
	if (!text_content)
		return (close(fg) == -1 ? -1 : 1);

	/* write momment */
	len = _strlen(text_content);
	w = write(fg, text_content, len);
	if (w == -1)
		return (-1);
	close(fg);
	return (1);
}

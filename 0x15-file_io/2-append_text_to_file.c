#include "main.h"
/**
 * _strlen - funtion count len of char.
 * @s: count string.
 * Return: string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * append_text_to_file - write after the file
 * @filename: name of file.
 * @text_content: text content.
 * Return: 1 ok, -1 error.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, retu_val;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
	if (close(fd) == -1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
	}
	len = _strlen(text_content);
	retu_val = write(fd, text_content, len);
	if (retu_val == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}

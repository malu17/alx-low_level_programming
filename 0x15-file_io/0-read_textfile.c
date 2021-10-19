#include "main.h"

/**
 * _strlen - count len of string
 * @s: string pointer
 * Return: len of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * read_textfile- function read textfds
 * @filename: pointer to fd
 * @letters: number of char to print out
 * Return: print letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ret_val;
	char *buffer;
	int fd, reading;

	buffer = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	reading = read(fd, buffer, letters);
	if (reading == -1)
	{
		return (0);
	}
	ret_val = _strlen(buffer);
	ret_val = write(STDOUT_FILENO, buffer, ret_val);
	if (ret_val == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	if (close(fd) == -1)
	{
		return (-1);
	}
	else
	{
		return (ret_val);
	}
}

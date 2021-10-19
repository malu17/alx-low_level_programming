#include "main.h"

/**
 * main - main file that copy file
 * @argc: arguments input.
 * @argv: pointers arguments.
 * Return: return 0 if all ok.
 */
int main(int argc, char *argv[])
{
	int fd_next, fd_origin, checkorigin, check_next_fd;
	int check_RW, check_err;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_origin = open(argv[1], O_RDONLY);
	if (fd_origin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_next = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_next == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((check_err = read(fd_origin, buf, 1024)) > 0)
	{
		check_RW = write(fd_next, buf, check_err);
		if (check_RW != check_err)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (check_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	checkorigin = close(fd_origin);
	if (checkorigin == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_origin), exit(100);
	check_next_fd = close(fd_next);
	if (check_next_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_next), exit(100);
	return (0);
}

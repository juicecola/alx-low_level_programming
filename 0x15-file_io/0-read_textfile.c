#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letter it should print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, res_read, res_write;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	res_read = read(fd, buf, letters);
	if (res_read == -1)
	{
		free(buf);
		return (0);
	}
	res_write = write(STDOUT_FILENO, buf, res_read);
	if (res_write == -1 || res_read != res_write)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (res_write);
}

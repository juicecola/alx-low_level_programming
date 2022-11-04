#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - Create a function that creates a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the text content
 * Return: 1 on sucess
 * -1 on failure (file can not be created, written, write “fails”, etc…)
 *  if file exist truncate it
 *  if filename is NULL return -1
 *  if text_context is NULL create empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t res_write;

	if (filename  == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		res_write = write(fd, text_content, len);
		if (res_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

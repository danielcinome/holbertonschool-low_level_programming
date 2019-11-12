#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
* create_file - creates a file.
* @filename : filename
* @text_content : text
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, val = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[i])
		{
			i++;
		}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	val = write(fd, text_content, i);
	if (val == -1)
		return (-1);

	close(fd);
	return (1);
}

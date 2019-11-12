#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
* append_text_to_file - appends text at the end of a file.
* @filename : filename
* @text_content : text
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fb, i = 0;

	if (filename == NULL)
		return (-1);

	fb = open(filename, O_WRONLY | O_APPEND);
	if (fb ==  -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	while (text_content[i])
	{
		i++;
	}

	write(fb, text_content, i);
	close(fb);
	return (1);
}

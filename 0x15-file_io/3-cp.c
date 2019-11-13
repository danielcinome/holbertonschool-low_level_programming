#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
* main - copies the content of a file to another file.
* @argc :
* @argv :
* Return:
*/

int main(int argc, char *argv[])
{
	int wd, rd, val = 0, cwd, crd;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "copies the content of a file to another file.");
		exit (97);
	}

	rd = open(argv[1], O_RDONLY);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE");
		exit (98);
	}
	wd = open(argv[2], O_WRONLY | O_CREAT | O_APPEND, 0664);
	if (wd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
		exit (99);
	}
	while ((val = read(rd, buf, 1024)) > 0)
	{
		write(wd, buf, val)
	}
	cwd = close(wd);
	crd = close(rd);
	if (cwd == -1 || crd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit (100);
	}
	 
	return (1);
}

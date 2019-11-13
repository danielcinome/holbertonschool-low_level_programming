#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
* main - copies the content of a file to another file.
* @argc : counter of arguments
* @argv : vector of arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int wd, rd, val = 0, cwd, crd;
	mode_t perm;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "copies the content of a file to another file.\n"),
		exit(97);
	rd = open(argv[1], O_RDONLY);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP |
	S_IROTH | S_IWOTH;
	wd = open(argv[2], O_CREAT | O_WRONLY, perm);
	if (wd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),

		exit(99);

	while ((val = read(rd, buf, 1024)) > 0)
	{
		if (write(wd, buf, val) != val)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	if (val == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);

	cwd = close(wd);
	crd = close(rd);
	if (cwd == -1 || crd == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", rd),
		exit(100);
	return (0);
}

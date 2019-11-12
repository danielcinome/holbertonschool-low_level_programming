#include "holberton.h"
#include <stdio.h>
#include <fcntl.h>

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
/**
* read_textfile - function that reads a text file and prints
* @filename : file
* @letters : is the number of letters it should read and print
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num;
	int str, i;
	char buf[1024];

	if (filename == NULL)
		return (0);
	str = open(filename, O_RDONLY);

	if (str == -1)
		return (0);

	num = read(str, buf, letters);

	if (num == -1)
		return (0);

	for (i = 0 ; i < num ; i++)
	{
		putchar(buf[i]);
	}

	close(str);
	return (num);
}

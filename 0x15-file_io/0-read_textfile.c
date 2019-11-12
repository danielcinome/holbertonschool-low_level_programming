#include "holberton.h"
#include <stdlib.h>
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
	ssize_t num = 0, num2 = 0;
	int str;
	char *buf;

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	str = open(filename, O_RDONLY);

	if (str == -1)
		return (0);

	num = read(str, buf, letters);

	if (num == -1)
		return (0);

	close(str);
	num2 = write(STDOUT_FILENO, buf, num);
	if (num2 == -1)
		return (0);

	return (num2);
}

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: text file to readed.
 * @letters: THE number of letters to be read
 *
 * Return: number bytes read/printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	{
	char *buf;
	ssize_t fd;
	ssize_t t;
	ssize_t z;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	buf = malloc(sizeof(char) * letters);
	z = read(fd, buf, letters);
	t = write(STDOUT_FILENO, buf, z);

	free(buf);
	close(fd);
	return (t);
}


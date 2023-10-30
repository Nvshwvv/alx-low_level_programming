#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name
 * @letters: the num of letters
 * Return: 1 if right 0 if wrong
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(fd);
	return (bytes);
}
